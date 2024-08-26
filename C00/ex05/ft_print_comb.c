/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 19:07:23 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/02 00:06:41 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comma(int x, int y, int z)
{
	char	d;
	char	e;

	d = 44;
	e = 32;
	if (x == 55 && y == 56 && z == 57)
	{
		return ;
	}
	else
	{
		write(1, &d, 1);
		write(1, &e, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				print_comma(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}
*/