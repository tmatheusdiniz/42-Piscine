/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:58:53 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/11 20:49:37 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	resul;

	resul = 0;
	i = 2;
	if (nb == 1 || nb == 0 || nb < 0)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb ++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	j;

	j = ft_find_next_prime(20);
	printf("%d", j);
}
*/
