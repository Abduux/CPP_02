# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/18 05:19:10 by ahraich           #+#    #+#              #
#    Updated: 2024/12/19 22:00:41 by ahraich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC  = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Fixed02

CPP = c++

REMOVE = rm -rf


all : ${NAME}

${NAME}: ${OBJ} Fixed.h
	${CPP} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re