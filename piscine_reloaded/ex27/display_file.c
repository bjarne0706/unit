/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:10:48 by dchantse          #+#    #+#             */
/*   Updated: 2018/10/25 12:13:07 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			main(int argc, char **argv)
{
	int		fd;
	char	*buffer;
	int		i;

	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	i = 0;
	fd = open(argv[1], O_RDONLY);
	while ((read(fd, &buffer, 1)) != 0)
	{
		write(1, &buffer, 1);
	}
	close(fd);
}
