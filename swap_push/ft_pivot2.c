/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pivot2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:17:59 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/20 22:58:52 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makeswap.h"

static int	ft_checksb(t_list **nb, t_list **sec)
{
	t_list	*b;

	b = *sec;
	if (b->next)
	{
		if (b->data < ft_last_num(b))
		{
			ft_rr(nb, "rb", sec);
			ft_putstr("rb\n");
		}
		else if (b->data < b->next->data)
		{
			ft_ss(nb, "sb", sec);
			ft_putstr("sb\n");
		}
	}
	return (0);
}

int			ft_pivot2(t_list **nb, t_list **sec, int save, int i)
{
	t_list	*a;

	if (!*nb)
		return (1);
	a = *nb;
	if (save >= a->data)
	{
		ft_ss(nb, "pb", sec);
		ft_putstr("pb\n");
		ft_checksb(nb, sec);
		ft_pivot2(nb, sec, ft_middle(nb, i), i);
	}
	else
	{
		ft_rr(nb, "ra", sec);
		ft_putstr("ra\n");
		ft_pivot2(nb, sec, save, i);
	}
	return (0);
}
