/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:47:27 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/11 20:45:20 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if ((nb == 0 && power == 0) || (nb > 0 && power == 0)
		|| (nb < 0 && power == 0))
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power((nb), (power - 1)));
}

#include <stdio.h>
int	main(void)
{
	int	i;
	int	j;
	int	resul;

	i = 3;
	j = 4;
	resul = ft_recursive_power(i, j);
	printf("%d", resul);
}

