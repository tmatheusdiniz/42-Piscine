/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:33:33 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/02 23:57:24 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	char	first;
	char	second;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			first = (x / 10) + '0';
			second = (x % 10) + '0';
			write(1, (char []){first, second, ' '}, 3);
			first = (y / 10) + '0';
			second = (y % 10) + '0';
			write(1, (char []){first, second}, 2);
			if (x != 98)
			{
				write(1, (char []){',', ' '}, 2);
			}
			y++;
		}
		x ++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
