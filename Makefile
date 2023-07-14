# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtenzen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 11:44:04 by dtenzen           #+#    #+#              #
#    Updated: 2022/12/12 11:44:38 by dtenzen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =	cc

CFLAGS =	-Wall -Wextra -Werror

AR =	ar rc

RM =	rm -f

SRCS =	ft_baselow.c ft_baseup.c ft_printf.c ft_putchar.c ft_puthexa.c \
	ft_putnbr.c ft_putnbrun.c ft_putstr.c ft_strlen.c 

OBJS =	 ${SRCS:.c=.o}

NAME =	 libftprintf.a

%.o: %.c
	${CC} ${CFLAGS} -c -o $@ $^

all:	${NAME}

${NAME}:	${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
