/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 19:13:47 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 20:06:28 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makeswap.h"

static	void	ft_sa(t_list **nb)
{
	t_list	*p;
	int		temp;

	temp = 0;
	p = *nb;
	if (ft_list_size(*nb) > 1)
	{
		temp = p->data;
		p->data = p->next->data;
		p->next->data = temp;
	}
}

static	void	ft_pb(t_list **nb, t_list **sec)
{
	t_list *stack1;
	t_list *stack2;

	stack1 = *nb;
	stack2 = *sec;
	if (*nb)
	{
		ft_push_front(&stack2, stack1->data);
		*sec = stack2;
		*nb = stack1->next;
		free(stack1);
		stack1 = NULL;
	}
}

static	void	ft_pa(t_list **nb, t_list **sec)
{
	t_list *stack1;
	t_list *stack2;

	stack1 = *nb;
	stack2 = *sec;
	if (stack2)
	{
		ft_push_front(&stack1, stack2->data);
		*nb = stack1;
		*sec = stack2->next;
		free(stack2);
		stack2 = NULL;
	}
}

void			ft_ss(t_list **nb, char *buf, t_list **sec)
{
	if (!ft_strcmp(buf, "sa"))
		ft_sa(nb);
	if (!ft_strcmp(buf, "sb"))
		ft_sa(sec);
	if (!ft_strcmp(buf, "ss"))
	{
		ft_sa(nb);
		ft_sa(sec);
	}
	if (!ft_strcmp(buf, "pa"))
		ft_pa(nb, sec);
	if (!ft_strcmp(buf, "pb"))
		ft_pb(nb, sec);
}
