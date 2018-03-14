/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:22:01 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/05 18:47:09 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makepush.h"

t_list		*ft_create_elem(int data)
{
	t_list	*oue;

	oue = malloc(sizeof(t_list));
	if (oue)
	{
		oue->data = data;
		oue->next = NULL;
	}
	return (oue);
}
