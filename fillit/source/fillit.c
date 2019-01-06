/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:37:59 by dchantse          #+#    #+#             */
/*   Updated: 2018/12/28 20:14:17 by anerus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		error(void)
{
	ft_putstr("error\n");
	exit(1);
}

int			ft_validate(char *buf)
{
	int		i;
	int		count[3];
	int		count2;

	count2 = 0;
	i = -1;
	while (++i < 3)
		count[i] = 0;
	i = -1;
	while (buf[++i])
	{
		IF((buf[i] == '.'), (count[0]++));
		IF((buf[i] == '#'), (count[1]++));
		IF((buf[i] == '\n'), (count[2]++));
		IF((buf[i] == '#' && buf[i - 1] == '#'), (count2++));
		IF((buf[i] == '#' && buf[i + 1] == '#'), (count2++));
		IF((buf[i] == '#' && buf[i - 5] == '#'), (count2++));
		IF((buf[i] == '#' && buf[i + 5] == '#'), (count2++));
	}
	return ((count[0] + count[1] + count[2] == 20
				|| count[0] + count[1] + count[2] == 21)
			&& (count2 == 6 || count2 == 8) && count[0] == 12 && count[1] == 4
			&& (count[2] == 5 || count[2] == 4) && buf[0] != '\n' ? 1 : 0);
}

void		make_t_tetr(int fd)
{
	int		i;
	int		res;
	char	buf[22];
	char	*str;
	int		tmp;

	i = 0;
	while ((res = read(fd, buf, 21)) > 0 && i < 27)
	{
		buf[res] = '\0';
		str = ft_memalloc(21);
		if (!(ft_validate(buf)))
			error();
		push_left_top(buf, &str, i);
		g_tetr[i].str = ft_strsplit(str, '\n');
		i++;
		tmp = res;
		free(str);
	}
	g_size = i;
	if (tmp != 20)
		error();
	create_index(0, 0, 0);
}

int			main(int argc, char **argv)
{
	int		fd;
	char	**m;
	int		i;
	int		j;

	i = 0;
	j = 0;
	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit \"source_file\"\n");
		return (0);
	}
	make_t_tetr(fd);
	m = map();
	while (m[i])
	{
		ft_putstr(m[i]);
		write(1, "\n", 1);
		i++;
	}
}
