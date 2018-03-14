/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:42:08 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 19:12:13 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makeswap.h"

static	int	ft_quickly(t_list **nb, t_list **sec)
{
	t_list	*a;

	a = *nb;
	if (a->data > a->next->data && a->data > ft_last_num(a))
	{
		ft_rr(&a, "ra", sec);
		ft_putstr("ra\n");
	}
	if (a->data > a->next->data && a->data < ft_last_num(a))
	{
		ft_ss(&a, "sa", sec);
		ft_putstr("sa\n");
	}
	if (a->data < a->next->data && a->next->data > ft_last_num(a))
	{
		ft_rr(&a, "rra", sec);
		ft_putstr("rra\n");
	}
	if (a->data > a->next->data)
	{
		ft_ss(&a, "sa", sec);
		ft_putstr("sa\n");
	}
	*nb = a;
	return (0);
}

static	int	ft_five(t_list **nb, t_list **sec)
{
	t_list *a;
	t_list *b;

	a = *nb;
	b = *sec;
	if (ft_list_size(b) == 2)
		return (0);
	if (a->data < a->next->data && a->data < ft_last_num(a))
	{
		ft_ss(nb, "pb", sec);
		ft_putstr("pb\n");
	}
	else if (ft_last_num(a) < a->data && ft_last_num(a) < a->next->data)
	{
		ft_rr(nb, "rra", sec);
		ft_putstr("rra\n");
	}
	else
	{
		ft_rr(nb, "ra", sec);
		ft_putstr("ra\n");
	}
	ft_five(nb, sec);
	return (0);
}

int			ft_little(t_list **nb, t_list **sec)
{
	if (ft_list_size(*nb) <= 3)
	{
		ft_quickly(nb, sec);
		return (0);
	}
	if (ft_list_size(*nb) <= 5)
	{
		ft_five(nb, sec);
		ft_quickly(nb, sec);
		ft_inser(nb, sec);
		return (0);
	}
	return (0);
}
