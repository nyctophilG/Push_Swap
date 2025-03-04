# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 11:02:02 by gosahin           #+#    #+#              #
#    Updated: 2025/03/04 17:12:03 by gosahin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

LIBFT		=	Libft
PRINTF		=	ft_printf

SRCS		=	ft_move.c \
				ft_move1.c
				
OBJS		=	$(SRCS:.c=.o)

all: $(LIBFT) $(PRINTF) $(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT)

$(PRINTF):
	@$(MAKE) -C $(PRINTF)

clean:
	@$(MAKE) -C $(PRINTF) clean --silent
	@$(MAKE) -C $(LIBFT) clean --silent
	@$(RM) $(OBJS)

fclean: clean
	@$(MAKE) -C $(PRINTF) fclean --silent
	@$(MAKE) -C $(LIBFT) fclean --silent
	@$(RM) 

re: fclean all

.PHONY: all clean fclean re
