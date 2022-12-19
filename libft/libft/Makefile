# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 16:42:50 by mmonclus          #+#    #+#              #
#    Updated: 2022/12/19 15:44:53 by mmonclus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

LIB		=	ft_atoi.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_strlen.c 	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_memcpy.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memmove.c	\
			ft_memcmp.c 	\
			ft_memchr.c		\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\

OBJS = $(LIB:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)

	ar rc $(NAME) $(OBJS)

$(OBJS): $(LIB)
	$(CC) $(CFLAGS) -c $^
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all