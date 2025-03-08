# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 11:02:02 by gosahin           #+#    #+#              #
#    Updated: 2025/03/08 03:11:44 by gosahin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

LIBFT		=	Libft

SRCS		=	push_swap.c \
				ft_move.c \
				ft_move1.c \
				valid_arg.c \
				
OBJS		=	$(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT)

clean:
	@$(MAKE) -C $(LIBFT) clean --silent
	@$(RM) $(OBJS)

fclean: clean
	@$(MAKE) -C $(LIBFT) fclean --silent
	@$(RM) 

re: fclean all

.PHONY: all clean fclean re