/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anerus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:15:36 by anerus            #+#    #+#             */
/*   Updated: 2018/12/26 18:51:35 by anerus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		push_left_top(char *buf, char **str, int key)
{
	char	*tmp_line;
	int		help;
	int		i;
	int		find;

	help = 0;
	tmp_line = *str;
	while (!(ft_validate(tmp_line)))
	{
		i = -1;
		while (++i < 20)
			tmp_line[i] = ((i % 5) == 4) ? '\n' : '.';
		find = ft_strchr(buf, '#') - (char *)buf;
		i = -1;
		while (buf[++i])
			if (buf[i] == '#')
				tmp_line[(i - find) + help] = buf[i];
		help++;
	}
	i = -1;
	while (tmp_line[++i])
		if (tmp_line[i] == '#')
			tmp_line[i] = key + 65;
	return (*tmp_line);
}
