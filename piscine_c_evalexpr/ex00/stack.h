/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:49:47 by lilam             #+#    #+#             */
/*   Updated: 2017/11/12 22:34:38 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <unistd.h>
# define CE(data) ft_create_elem(data)
# define IS_OPERATOR(x) (x=='+' || x=='-' || x=='*' || x==47 || x=='%')
# define DL(x) (x == '\n' || x == '\t' || x == ' ' || x == '\0')
# define ITP_VARS int i=0; int k=-1; t_stack *stack=create_stack(strlength(str))
# define STR_VARS int length = 0; int sign = 0; char *temp

typedef struct		s_stack
{
	int			top;
	unsigned	length;
	int			*array;
}					t_stack;
char				*add_space(char *str);
t_stack				*create_stack(unsigned length);
int					is_empty(t_stack *stack);
char				view(t_stack *stack);
char				pop(t_stack *stack);
void				push(t_stack *stack, char op);
int					pemdas(char op);
int					strlength(char *str);
int					do_op(int left, int right, char operator);
int					cal_length(char *str);
char				**ft_split_whitespaces(char *str);
int					ft_atoi(char *str);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
int					eval_expr(char *str);
#endif
