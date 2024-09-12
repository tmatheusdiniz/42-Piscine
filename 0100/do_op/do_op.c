/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:09:48 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/20 14:19:51 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **str)
{
	int i;
	int x;
	int y;
	char op;

	i = 0;
	x = 0;
	y = 0;
	if (argc == 4)
	{
		x = atoi(str[1]);
		y = atoi(str[3]);
		op = str[2][0];
		if (op == '*')
			i = x * y;
		else if (op == '/')
			i = x / y;
		else if (op == '+')
			i = x + y;
		else if (op == '-')
			i = x - y;
		printf ("%d", i);
	}
	printf("\n");
}
