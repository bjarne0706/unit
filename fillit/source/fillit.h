/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:41:57 by dchantse          #+#    #+#             */
/*   Updated: 2018/12/26 21:32:45 by anerus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <stdio.h>
# include <unistd.h>
# define IFR(x, y) if (x) {return y;}
# define IF(x, y) if (x) {(y);}

typedef struct	s_tetr
{
	char	**str;
	int		i[4][2];
}				t_tetr;

t_tetr g_tetr[27];
int g_size;
int g_le;
void			make_matrix(char *buf);
int				ft_validate(char *buf);
void			make_t_tetr(int fd);
void			error();
char			push_left_top(char *buf, char **str, int i);
char			**map(void);
void			create_index(int x, int y, int k);
int				add_tetr(char **map, int y, int x, int f);
int				check_tetr(char **map, int y, int x, int f);
void			free_map(char **map);
int				del_fig(char **map, int y, int x, int f);
#endif
