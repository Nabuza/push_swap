/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inser.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 19:52:13 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 15:14:26 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makeswap.h"

static	void	ft_brain(t_list **nb, t_list **sec)
{
	t_list *b;

	b = *sec;
	if (b->next)
	{
		if (b->next->data > b->data && b->next->data >= ft_last_num(b))
		{
			ft_rr(nb, "rb", sec);
			ft_putstr("rb\n");
		}
		else if (ft_last_num(b) > b->data && ft_last_num(b) >= b->next->data)
		{
			ft_rr(nb, "rrb", sec);
			ft_putstr("rrb\n");
		}
	}
}

static	void	ft_turn(t_list **nb, t_list **sec)
{
	t_list	*a;
	t_list	*b;
	int		i;

	i = 0;
	a = *nb;
	b = *sec;
	while (b->data > a->data)
	{
		ft_rr(&a, "ra", &b);
		ft_putstr("ra\n");
		i++;
	}
	ft_ss(&a, "pa", &b);
	ft_putstr("pa\n");
	while (i > 0)
	{
		ft_rr(&a, "rra", &b);
		ft_putstr("rra\n");
		i--;
	}
	*nb = a;
	*sec = b;
}

int				ft_inser(t_list **nb, t_list **sec)
{
	t_list *a;
	t_list *b;

	ft_ss(nb, "pa", sec);
	ft_putstr("pa\n");
	a = *nb;
	b = *sec;
	while (b)
	{
		ft_brain(&a, &b);
		ft_turn(&a, &b);
	}
	*nb = a;
	*sec = b;
	return (0);
}
