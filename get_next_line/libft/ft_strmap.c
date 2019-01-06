/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 19:24:54 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/21 13:06:16 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ss;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(ss = ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		ss[i] = (*f)(*(s + i));
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
