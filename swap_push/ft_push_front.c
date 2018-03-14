/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 23:45:31 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 20:08:24 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makeswap.h"

void	ft_push_front(t_list **p, int data)
{
	t_list *ok;

	if (*p)
	{
		ok = ft_create_elem(data);
		ok->next = *p;
		*p = ok;
	}
	else
		*p = ft_create_elem(data);
}
