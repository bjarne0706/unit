/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 18:38:52 by dchantse          #+#    #+#             */
/*   Updated: 2018/12/26 21:03:10 by anerus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		free_map(char **map)
{
	int		i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

int			check_tetr(char **map, int y, int x, int f)
{
	int		y1;
	int		x1;
	int		i;
	int		tmp_y;
	int		tmp_x;

	i = -1;
	x1 = x;
	y1 = y;
	while (++i < 4)
	{
		tmp_y = y + g_tetr[f].i[i][0];
		tmp_x = x + g_tetr[f].i[i][1];
		IFR((tmp_y == g_le), 0);
		IFR((y1 < 0 || x1 < 0 || y1 > g_le - 1 || x1 > g_le - 1), 0);
		IF((g_tetr[f].i[0][0] == 0 && g_tetr[f].i[0][1] == 1), (tmp_x--));
		IF((g_tetr[f].i[0][0] == 0 && g_tetr[f].i[0][1] == 2), (tmp_x -= 2));
		IFR((map[tmp_y][tmp_x] != '.'), 0);
		if (i > 0)
		{
			y1 = y + g_tetr[f].i[i][0] - g_tetr[f].i[0][0];
			x1 = x + g_tetr[f].i[i][1] - g_tetr[f].i[0][1];
		}
	}
	return (1);
}

int			add_tetr(char **map, int y, int x, int f)
{
	int		y1;
	int		x1;
	int		i;
	int		kek;

	i = 0;
	x1 = x;
	y1 = y;
	kek = 0;
	while (kek < 5)
	{
		if (i == 4)
			i = 3;
		IFR(((y1 == g_le && map[y1][x1] == '\0')), 0);
		map[y1][x1] = g_tetr[f].str[g_tetr[f].i[i][0]][g_tetr[f].i[i][1]];
		y1 = y + g_tetr[f].i[i][0] - g_tetr[f].i[0][0];
		x1 = x + g_tetr[f].i[i][1] - g_tetr[f].i[0][1];
		i++;
		kek++;
	}
	return (1);
}

int			del_fig(char **map, int y, int x, int f)
{
	int		y1;
	int		x1;
	int		i;
	int		kek;

	i = 0;
	x1 = x;
	y1 = y;
	kek = 0;
	while (kek < 5)
	{
		if (i == 4)
			i = 3;
		IFR(((y1 == g_le && map[y1][x1] == '\0')), 0);
		map[y1][x1] = '.';
		y1 = y + g_tetr[f].i[i][0] - g_tetr[f].i[0][0];
		x1 = x + g_tetr[f].i[i][1] - g_tetr[f].i[0][1];
		i++;
		kek++;
	}
	return (1);
}
