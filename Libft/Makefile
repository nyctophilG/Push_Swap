# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 15:31:46 by gosahin           #+#    #+#              #
#    Updated: 2025/03/04 11:06:53 by gosahin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -fPIC
RM		=	rm -f
AR		=	ar rcs

SRCS	=		ft_isalpha.c	\
				ft_isdigit.c	\
				ft_isalnum.c	\
				ft_isascii.c	\
				ft_isprint.c	\
				ft_strlen.c	\
				ft_memset.c	\
				ft_bzero.c	\
				ft_memcpy.c	\
				ft_memmove.c	\
				ft_strlcpy.c	\
				ft_strlcat.c	\
				ft_toupper.c	\
				ft_tolower.c	\
				ft_strchr.c	\
				ft_strrchr.c	\
				ft_strncmp.c	\
				ft_memchr.c	\
				ft_memcmp.c	\
				ft_strnstr.c	\
				ft_atoi.c	\
				ft_calloc.c	\
				ft_strdup.c	\
				ft_substr.c	\
				ft_strjoin.c	\
				ft_strtrim.c	\
				ft_split.c	\
				ft_itoa.c	\
				ft_strmapi.c	\
				ft_striteri.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c

SRCS_BON	=	ft_lstnew_bonus.c	\
				ft_lstadd_front_bonus.c	\
				ft_lstsize_bonus.c	\
				ft_lstlast_bonus.c	\
				ft_lstadd_back_bonus.c	\
				ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c

OBJS	=	$(SRCS:.c=.o)
BONUS_OBJ	=	$(SRCS_BON:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(AR)	$(NAME)	$(OBJS)
		
bonus:	$(NAME)	$(BONUS_OBJ)
		$(AR)	$(NAME)	$(BONUS_OBJ)
		
clean:
		$(RM)	$(OBJS)	$(BONUS_OBJ)
		
fclean:	clean
		$(RM)	$(NAME)
		
re:		fclean	all

.PHONY:	all	bonus	clean	fclean	re
		