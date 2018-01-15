# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 09:46:16 by lilam             #+#    #+#              #
#    Updated: 2017/11/06 16:41:51 by lilam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJECT_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = ./includes

all:
	gcc -c -Wall -Werror -Wextra -I $(HEADER)  $(SRC)
	ar rc $(NAME) $(OBJECT_FILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECT_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all


