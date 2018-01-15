# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 20:53:15 by lilam             #+#    #+#              #
#    Updated: 2017/11/06 21:09:04 by lilam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILENAME = do-op
SRC = ./srcs/ft_putstr.c ./srcs/ft_putchar.c ./srcs/ft_putnbr.c main.c ./srcs/ft_atoi.c ./srcs/ft_strlen.c

all: 
	@gcc -o $(FILENAME) -Wall -Werror -Wextra $(SRC) -I ./includes

clean:
	@rm -f $(FILENAME)

