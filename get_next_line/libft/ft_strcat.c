/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:00:37 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/21 13:09:06 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s2, const char *s1)
{
	int i;
	int i2;

	i2 = 0;
	i = 0;
	while (s2[i])
		i++;
	while (s1[i2])
	{
		s2[i] = s1[i2];
		i2++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
