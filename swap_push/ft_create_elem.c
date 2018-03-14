/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:22:01 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 20:09:21 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makeswap.h"

t_list		*ft_create_elem(int data)
{
	t_list	*oue;

	if (!(oue = malloc(sizeof(t_list))))
		return (NULL);
	if (oue)
	{
		oue->data = data;
		oue->next = NULL;
	}
	return (oue);
}
