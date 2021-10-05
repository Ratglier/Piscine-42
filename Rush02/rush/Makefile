SRCS	= main.c link_number.c file_to_string.c misc.c search_in_list.c ft_split.c modify_string.c dict_parsing.c link_number.c

OBJS	= ${SRCS:.c=.o}

NAME	= fclean

CC		= cc

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}