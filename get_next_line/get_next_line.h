/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:37:18 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/26 20:31:48 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100
# include "libft.h"
# include <stdlib.h>
# include <fcntl.h>
# define IFRET(x, y) if (x) return (y);
# define IF(x, y) if (x) {(y);}

int		get_next_line(const int fd, char **line);

#endif
