/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:23:40 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/21 13:13:27 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst && !del)
		return ;
	if ((*alst)->next)
	{
		ft_lstdel(&(*alst)->next, del);
	}
	ft_lstdelone(alst, del);
}
