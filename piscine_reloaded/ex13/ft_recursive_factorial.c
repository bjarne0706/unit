/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 13:18:21 by dchantse          #+#    #+#             */
/*   Updated: 2018/10/23 20:19:39 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int fac;

	fac = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1 && nb <= 12)
	{
		fac = nb * ft_recursive_factorial(nb - 1);
		return (fac);
	}
	return (0);
}
