/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigital.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:47:08 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 00:21:18 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makepush.h"

int		ft_isdigital(char *c)
{
	int i;

	i = 0;
	if (c[i] == '-')
		i++;
	if (!c[i])
		return (0);
	while (c[i])
	{
		if (c[i] >= 48 && c[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
