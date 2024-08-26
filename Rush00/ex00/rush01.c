/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:21:53 by david-fe          #+#    #+#             */
/*   Updated: 2024/08/04 21:36:09 by david-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char symbol);

void	rush(int x, int y) //parameter for ft_putchar in order: / \ space *
{
	int	w;
	int	h;

	h = 0;
	w = 0;
	while (h <= y)
	{
		while (w <= x)
		{
			if ((h == 1 && w == 1) || ((h == y && w == x) && y > 1 && x > 1))
				ft_putchar(47);
			else if ((h == 1 && w == x) || (h == y && w == 1))
				ft_putchar(92);
			else if ((h > 1 && h < y) && (w > 1 && w < x))
				ft_putchar(32);
			else if ((h == 1 || h == y) && (w > 1 && w < x))
				ft_putchar(42);
			else if ((h > 1 && h < y) && (w == 1 || w == x))
				ft_putchar(42);
			w++;
		}
		ft_putchar(10);
		w = 1;
		h++;
	}
}
