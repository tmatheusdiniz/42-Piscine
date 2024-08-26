/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:10:26 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/11 20:44:13 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if ((nb == 0 && power == 0) || (nb > 0 && power == 0))
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		nb *= x;
		power --;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	j;
	int	resul;

	i = -2;
	j = 4;
	resul = ft_iterative_power(i, j);
	printf("%d", resul);
}
*/
