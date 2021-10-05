# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 14:46:03 by ntouazi           #+#    #+#              #
#    Updated: 2021/03/30 15:35:02 by ntouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_putchar.c \
			srcs/ft_swap.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/ft_strcmp.c

OBJ		= $(SRCS:.c=.o)

NAME	= libft.a

CC		= gcc

RM		= rm -rf

FLAGS	= -Wall -Wextra -Werror

AR		= ar -rc

all:		$(NAME)

$(NAME):	$(OBJ)
			ar -rcs	$@ $^


%.o:		%.c
			$(CC) $(FLAGS) -I includes -o $@ -c $<

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean flcean re
