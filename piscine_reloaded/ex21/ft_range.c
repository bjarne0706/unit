/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:46:39 by dchantse          #+#    #+#             */
/*   Updated: 2018/10/24 22:19:32 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*num;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	num = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	num[i] = '\0';
	return (num);
}
