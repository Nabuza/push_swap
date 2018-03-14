/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:11:56 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 22:02:30 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makepush.h"
#include <stdio.h>

static	int	ft_operate(t_list **nb, char *buf, t_list **sec)
{
	if (!ft_strcmp(buf, "sa") || !ft_strcmp(buf, "sb") ||
			!ft_strcmp(buf, "ss"))
		ft_ss(nb, buf, sec);
	else if (!ft_strcmp(buf, "pa") || !ft_strcmp(buf, "pb"))
		ft_ss(nb, buf, sec);
	else if (!ft_strcmp(buf, "ra") || !ft_strcmp(buf, "rb") ||
			!ft_strcmp(buf, "rr"))
		ft_rr(nb, buf, sec);
	else if (!ft_strcmp(buf, "rra") || !ft_strcmp(buf, "rrb") ||
			!ft_strcmp(buf, "rrr"))
		ft_rr(nb, buf, sec);
	else
		return (0);
	return (1);
}

static	int	ft_test(t_list *nb, t_list *sec)
{
	if (sec || !nb)
		return (0);
	while (nb->next != NULL)
	{
		if (nb->data >= nb->next->data)
		{
			ft_list_clear(&nb);
			return (0);
		}
		nb = nb->next;
	}
	ft_list_clear(&nb);
	return (1);
}

static	int	ft_sort(t_list **nb, t_list **sec)
{
	char *buf;

	buf = NULL;
	if (!ft_doublon(*nb))
		return (0);
	while (get_next_line(0, &buf))
	{
		if (!ft_operate(nb, buf, sec))
		{
			ft_strdel(&buf);
			return (0);
		}
		ft_strdel(&buf);
	}
	return (1);
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
	if (!ft_sort(&nb, &sec))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	else if (!ft_test(nb, sec))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
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
