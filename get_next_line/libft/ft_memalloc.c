/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:10:18 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/21 13:12:39 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void				*ft_memalloc(size_t size)
{
	unsigned char	*memory;
	size_t			i;

	i = 0;
	if (!(memory = (unsigned char*)malloc(sizeof(memory) * size)))
		return (NULL);
	while (i < size)
	{
		memory[i] = '\0';
		i++;
	}
	return (memory);
}
