/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 15:30:59 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/09 15:32:52 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makepush.h"

size_t		ft_list_size(t_list *nb)
{
	size_t i;

	i = 0;
	if (!nb)
		return (0);
	while (nb)
	{
		nb = nb->next;
		i++;
	}
	return (i);
}
