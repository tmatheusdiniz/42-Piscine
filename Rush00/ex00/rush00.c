/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:12:47 by david-fe          #+#    #+#             */
/*   Updated: 2024/08/04 17:27:55 by david-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char symbol);

void	rush(int x, int y) //parameter for ft_putchar in order: o - | space /n 
{
	int	w;
	int	h;

	h = 1;
	w = 1;
	while (h <= y)
	{
		while (w <= x)
		{
			if ((h == 1 || h == y) && (w == 1 || w == x))
				ft_putchar(111);
			if ((h == 1 || h == y) && (!(w == 1 || w == x)))
				ft_putchar(45);
			if ((!(h == 1 || h == y)) && (w == 1 || w == x))
				ft_putchar(124);
			if ((!(h == 1 || h == y)) && (!(w == 1 || w == x)))
			{
				ft_putchar(32);
			}
			w ++;
		}
		ft_putchar(10);
		w = 1;
		h ++;
	}
}
