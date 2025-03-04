# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 16:05:26 by gosahin           #+#    #+#              #
#    Updated: 2025/03/04 11:07:02 by gosahin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -fPIC
RM		=	rm -f
AR		=	ar rcs

SRCS	=	ft_printf_c.c	\
			ft_printf_s.c	\
			ft_printf_d.c	\
			ft_printf_u.c	\
			ft_printf_p.c	\
			ft_printf.c		

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(AR)	$(NAME)	$(OBJS)

clean:
		$(RM)	$(OBJS)

fclean:	clean
		$(RM)	$(NAME)

re:		fclean	all

.PHONY: all	clean	fclean	re