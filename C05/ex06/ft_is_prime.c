/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:43:11 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/11 20:48:14 by mreinald         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	j;

	i = 0;

	j = ft_is_prime(i);
	printf("%d", j);

}
*/
