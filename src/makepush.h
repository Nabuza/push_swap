/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makepush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:06:48 by nagaloul          #+#    #+#             */
/*   Updated: 2017/04/21 23:36:42 by nagaloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAKEPUSH_H
# define MAKEPUSH_H
# include "get_next_line.h"
# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	int				data;
}					t_list;

int					ft_isdigital(char *c);
t_list				*ft_create_elem(int a);
void				ft_push_back(t_list **begin_list, int data);
void				ft_rr(t_list **nb, char *buf, t_list **sec);
void				ft_push_front(t_list **p, int data);
void				ft_ss(t_list **nb, char *buf, t_list **sec);
size_t				ft_list_size(t_list *nb);
int					ft_doublon(t_list *nb);
int					ft_isint(char *c);
void				ft_list_clear(t_list **begin_list);

#endif
