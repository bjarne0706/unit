/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:03:38 by dchantse          #+#    #+#             */
/*   Updated: 2018/10/24 22:21:29 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;
	int statement;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		statement = (*f)(tab[i]);
		if (statement == 1)
			counter++;
		statement = 0;
		i++;
	}
	return (counter);
}
