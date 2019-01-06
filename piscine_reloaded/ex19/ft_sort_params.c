/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:36:19 by dchantse          #+#    #+#             */
/*   Updated: 2018/10/23 20:29:38 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *s1, char *s2);
void		ft_swap(char **a, char **b);
void		ft_putchar(char c);
void		ft_print_params(char *argv[]);

int			main(int argc, char *argv[])
{
	int		s;

	s = 1;
	if (argc == 1)
		return (0);
	while (s < argc - 1)
	{
		if (ft_strcmp(argv[s], argv[s + 1]) > 0)
		{
			ft_swap(&argv[s], &argv[s + 1]);
			s = 0;
		}
		s++;
	}
	ft_print_params(argv);
}

void		ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void		ft_print_params(char *argv[])
{
	int		s;
	int		l;

	s = 1;
	l = 0;
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
