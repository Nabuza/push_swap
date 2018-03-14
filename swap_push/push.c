/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:11:56 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 22:06:47 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makeswap.h"
#include <stdio.h>

static	int	ft_try(t_list *nb, t_list *sec)
{
	if (sec)
		return (0);
	while (nb->next)
	{
		if (nb->data > nb->next->data)
			return (0);
		nb = nb->next;
	}
	return (1);
}

static	int	ft_operate(t_list **nb, t_list **sec)
{
	t_list	*a;
	int		save;
	int		i;

	i = 0;
	a = *nb;
	if (ft_try(*nb, *sec))
		return (0);
	if (ft_list_size(*nb) <= 5)
	{
		ft_little(nb, sec);
		return (0);
	}
	if (ft_list_size(*nb) < 50)
		i = 2;
	else if (ft_list_size(*nb) < 300)
		i = 9;
	else if (ft_list_size(*nb) > 300)
		i = 18;
	save = ft_middle(nb, i);
	ft_pivot2(nb, sec, save, i);
	ft_inser(nb, sec);
	return (0);
}

static	int	ft_fill(char **av)
{
	t_list	*nb;
	t_list	*sec;
	int		i;

	i = 2;
	sec = NULL;
	nb = ft_create_elem(ft_atoi(av[1]));
	while (av[i])
	{
		ft_push_back(&nb, ft_atoi(av[i]));
		i++;
	}
	if (!ft_doublon(nb))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	ft_operate(&nb, &sec);
	ft_list_clear(&nb);
	return (0);
}

int			main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac <= 1)
		return (0);
	while (av[i])
	{
		if (!(ft_isdigital(av[i])))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (!(ft_isint(av[i])))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	ft_fill(av);
	return (0);
}
