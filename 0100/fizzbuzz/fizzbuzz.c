/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:46:10 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/19 19:58:20 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int ptr[99];
	char str[3];
	int i;
	int x;

	i = 1;
	x = 0;
	while (i <= 100)
	{
		ptr[x++] = i++;
	}
	i = 0;
	while (i <= 99)
	{
		if (ptr[i] == 100)
		{
			write(1, "buzz\n", 5);
			break ;
		}
		if (ptr[i] < 10)
		{
			str[0] = ptr[i] + '0';
			str[1] = '\0';
		}
		else 
		{
			str[0] = ptr[i] / 10 + '0';
			str[1] = ptr[i] % 10 + '0';
			str[2] = '\0';
		}
	if (ptr[i] % 3 == 0 && ptr[i] % 5 == 0)
		write(1, "fizzbuzz\n", 9);
	else if (ptr[i] % 3 == 0)
		write(1, "fizz\n", 5);
	else if (ptr[i] % 5 == 0)
		write(1, "buzz\n", 5);
	else
	{
		if (ptr[i] < 10)
		{
			write(1, &str[0], 1);
			write(1, "\n", 1);
		}
		else
		{
			write(1, &str[0], 2);
			write(1, "\n", 1);
		}
	}
	i ++;
	}
}







