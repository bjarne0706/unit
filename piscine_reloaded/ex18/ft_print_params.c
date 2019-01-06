/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:00:51 by dchantse          #+#    #+#             */
/*   Updated: 2018/10/23 16:57:15 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int s;
	int l;

	s = 1;
	l = 0;
	if (argc == 0)
		return (0);
	while (argv[s] != '\0')
	{
		while (argv[s][l])
		{
			ft_putchar(argv[s][l]);
			l++;
		}
		l = 0;
		s++;
		ft_putchar('\n');
	}
}
