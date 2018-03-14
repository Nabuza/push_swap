/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 19:26:51 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 21:19:57 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makepush.h"

static	void	ft_ra(t_list **nb)
{
	t_list	*p;

	if (*nb)
	{
		p = *nb;
		ft_push_back(&p, p->data);
		*nb = p->next;
		free(p);
		p = NULL;
	}
}

static	void	ft_rra(t_list **nb)
{
	t_list	*p;

	if (*nb)
	{
		p = *nb;
		while (p->next)
			p = p->next;
		ft_push_front(&p, p->data);
		p->next = *nb;
		*nb = p;
		while (p->next->next)
			p = p->next;
		free(p->next);
		p->next = NULL;
	}
}

void			ft_rr(t_list **nb, char *buf, t_list **sec)
{
	if (!(ft_strcmp(buf, "ra")))
		ft_ra(nb);
	if (!ft_strcmp(buf, "rb"))
		ft_ra(sec);
	if (!ft_strcmp(buf, "rr"))
	{
		ft_ra(nb);
		ft_ra(sec);
	}
	if (!ft_strcmp(buf, "rra"))
		ft_rra(nb);
	if (!ft_strcmp(buf, "rrb"))
		ft_rra(sec);
	if (!ft_strcmp(buf, "rrr"))
	{
		ft_rra(nb);
		ft_rra(sec);
	}
}
