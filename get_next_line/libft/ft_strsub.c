/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 19:43:36 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/21 12:58:51 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;
	size_t	save;

	i = 0;
	ss = ft_memalloc(len + 1);
	if (!ss || !s)
		return (NULL);
	save = len + (size_t)start;
	while (start < save)
	{
		ss[i] = s[start];
		start++;
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
