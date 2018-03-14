/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublon.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 22:20:27 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/20 23:33:21 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makepush.h"

int		ft_doublon(t_list *nb)
{
	t_list	*ok;

	ok = nb;
	while (nb)
	{
		ok = nb;
		while (ok->next)
		{
			if (nb->data == ok->next->data)
				return (0);
			ok = ok->next;
		}
		nb = nb->next;
	}
	return (1);
}
