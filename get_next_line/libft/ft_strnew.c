/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 16:55:17 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/21 13:05:22 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	if ((str = ft_memalloc(size + 1)) != NULL)
	{
		ft_bzero(str, size + 1);
		return (str);
	}
	return (NULL);
}
