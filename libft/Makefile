# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 16:42:50 by mmonclus          #+#    #+#              #
#    Updated: 2022/12/02 17:50:51 by mmonclus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	$(shell find . -name "*.c")
#es como ir llamando a todas las funciones que he creado

OBJS = $(SRC:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)

	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $^
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all