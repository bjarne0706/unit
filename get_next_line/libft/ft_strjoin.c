/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 12:38:32 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/21 13:06:33 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_new;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	s_new = ft_memalloc(i + 1);
	if (!s_new)
		return (NULL);
	ft_strcat(s_new, (char *)s1);
	ft_strcat(s_new, (char *)s2);
	s_new[i + 1] = '\0';
	return (s_new);
}
