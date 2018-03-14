/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:49:24 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 21:22:26 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makepush.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *nan;
	t_list *tmp;

	if (begin_list != NULL)
	{
		nan = *begin_list;
		while (nan)
		{
			tmp = nan->next;
			free(nan);
			nan = tmp;
		}
		*begin_list = NULL;
	}
}
