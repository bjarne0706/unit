/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 18:38:52 by dchantse          #+#    #+#             */
/*   Updated: 2018/12/26 21:00:15 by anerus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			solve_map(char **map, int i)
{
	int		x;
	int		y;

	y = 0;
	IFR((g_tetr[i].str == NULL), 1);
	while (y < g_le)
	{
		x = 0;
		while (x < g_le)
		{
			if (check_tetr(map, y, x, i))
			{
				add_tetr(map, y, x, i);
				IFR((solve_map(map, i + 1)), 1);
				del_fig(map, y, x, i);
			}
			x++;
		}
		y++;
	}
	return (0);
}

char		**map_new(int size)
{
	char	**str;
	int		x;
	int		y;

	str = (char**)malloc(sizeof(char*) * (size + 1));
	y = 0;
	while (y < size)
	{
		str[y] = (char*)malloc(sizeof(char) * (size + 1));
		x = 0;
		while (x < size)
		{
			str[y][x] = '.';
			x++;
		}
		str[y][x] = '\0';
		y++;
	}
	str[y] = NULL;
	return (str);
}

int			high_sqrt(int n)
{
	int		size;

	size = 2;
	IFR((g_size <= 2), 2);
	while (size * size < n)
		size++;
	return (size);
}

char		**map(void)
{
	char	**map;

	g_le = high_sqrt(g_size * 4);
	map = map_new(g_le);
	while (!solve_map(map, 0))
	{
		free_map(map);
		g_le++;
		map = map_new(g_le);
	}
	return (map);
}

void		create_index(int x, int y, int k)
{
	int		iterator;

	k = 0;
	while (g_tetr[k].str != NULL)
	{
		iterator = 0;
		y = 0;
		while (g_tetr[k].str[y] != NULL)
		{
			x = 0;
			while (g_tetr[k].str[y][x])
			{
				if (ft_isalpha(g_tetr[k].str[y][x]))
				{
					g_tetr[k].i[iterator][0] = y;
					g_tetr[k].i[iterator][1] = x;
					iterator++;
				}
				x++;
			}
			y++;
		}
		k++;
	}
}
