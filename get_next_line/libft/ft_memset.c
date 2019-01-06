/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:44:05 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/21 13:12:18 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memset(void *kek, int val, size_t num)
{
	size_t	i;
	char	*str;

	str = kek;
	i = 0;
	while (i < num)
	{
		str[i] = val;
		i++;
	}
	return (str);
}
