/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:32:48 by nagaloul          #+#    #+#             */
/*   Updated: 2016/11/14 16:32:52 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*a;
	int		i;

	i = 0;
	if (!(a = ((char*)malloc(sizeof(char) * size + 1))))
		return (NULL);
	a[size + 1] = '\0';
	while (a[i] != '\0')
	{
		a[i] = '\0';
		i++;
	}
	return (a);
}
