#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 17:29:00 by nagaloul          #+#    #+#              #
#    Updated: 2017/04/21 23:31:34 by nagaloul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
NAME2 = push_swap
GCC = gcc -c -Wall -Wextra -Werror
SRC = 	ft_create_elem.c \
		ft_doublon.c \
		ft_isdigital.c \
		ft_ss.c \
		ft_rr.c \
		ft_list_size.c \
		checker.c \
		ft_push_back.c \
		ft_push_front.c \
		ft_isint.c \
		get_next_line.c \
		ft_list_clear.c 

SRC2 =	ft_inser.c \
		ft_create_elem.c \
		ft_doublon.c \
		ft_isdigital.c \
		ft_ss.c \
		ft_rr.c \
		ft_list_size.c \
		ft_push_back.c \
		ft_push_front.c \
		ft_isint.c \
		ft_list_clear.c\
		push.c \
		ft_little.c \
		ft_middle.c \
		ft_pivot2.c \
		ft_last_num.c 


OBJ = $(addprefix src/,$(SRC:.c=.o))
OBJ2 = $(addprefix swap_push/,$(SRC2:.c=.o))

all: $(NAME) $(NAME2)


$(NAME): $(OBJ)
		@make -C libft/
		@gcc $(OBJ) -o $(NAME) -L libft -lft

$(NAME2):  $(OBJ2)
		@make -C libft
		@gcc $(OBJ2) -o $(NAME2) -L libft -lft

clean:
		make clean -C libft
		@rm -f $(OBJ) $(OBJ2)

fclean: clean
		make fclean -C libft
		@rm -f $(NAME) $(NAME2)

re: fclean all
