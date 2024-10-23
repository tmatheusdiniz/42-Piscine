/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:50:29 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/10 18:17:47 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	operator(int x, int y, char op)
{
	int i;

	i = 0;
	if (op == '*')
		i = x * y;
	else if (op == '/')
		i = x / y;
	else if (op == '+')
		i = x + y;
	else if (op == '-')
			i = x - y;
	else if(op == '%')
		i = x % y;
	ft_putnbr(i);
}

void	do_op(char *f_value, char *s_value, char *op)
{
	int x;
	int y;

	x = ft_atoi(f_value);
	y = ft_atoi(s_value);
	if (!(op[0] == '+' || op[0] == '-' || op[0] == '*' 
						|| op[0] == '/' || op[0] == '%'))
	{
		ft_putchar('0');
	}
	else if (op[0] == '/' && y == 0)
		write(1, "Stop : division by zero", 23);
	else if(op[0] == '%' && y == 0)
		write(1, "Stop : module by zero\n", 21);
	else
		operator (x, y, op[0]);
	write (1, "\n", 1);
}

int	main(int argc, char **str)
{
	if (argc == 4)
	{
		do_op(str[1], str[3], str[2]);		
	}
}