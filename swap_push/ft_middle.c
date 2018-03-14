/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_middle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 19:03:25 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 15:15:30 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makeswap.h"

int		ft_middle(t_list **nb, int i)
{
	t_list	*a;
	int		mid;
	int		max;
	t_list	*bouh;

	a = *nb;
	bouh = *nb;
	mid = 0;
	max = 0;
	while (bouh)
	{
		if (max == ft_list_size(*nb) / i + 1)
			return (mid);
		max = ft_list_size(*nb);
		mid = bouh->data;
		a = *nb;
		while (a)
		{
			if (mid < a->data)
				max--;
			a = a->next;
		}
		bouh = bouh->next;
	}
	return (mid);
}
