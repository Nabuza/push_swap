/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 23:55:13 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 00:19:26 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makepush.h"

int		ft_isint(char *c)
{
	long int		i;
	long int		a;
	long int		neg;

	neg = 1;
	a = 0;
	i = 0;
	if (c[a] == '-')
	{
		a++;
		neg = -1;
	}
	while (c[a])
	{
		i = i * 10 + c[a] - 48;
		a++;
	}
	i = i * neg;
	a = 2147483647;
	neg = -2147483648;
	if (i < neg)
		return (0);
	if (i > a)
		return (0);
	return (1);
}
