# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 19:02:05 by lilam             #+#    #+#              #
#    Updated: 2017/11/12 22:40:50 by lilam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
C_FILES = eval_expr.c itp_func.c main.c stack.c str_func.c 
FLAGS = -Wall -Wextra -Werror

all:
	@gcc $(FLAGS) $(C_FILES)
	@/bin/echo "  echo \" \$$1 \"   | bc " > $(NAME) && chmod 755 $(NAME)

clean:
	@/bin/rm -f a.out
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
