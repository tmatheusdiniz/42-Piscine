/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:22:40 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/11 20:46:57 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	j;
	int	resul;

	resul = 0;
	i = 2;
	if (nb == 1)
	{
		return (1);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			j = nb / i;
			if (j * j == nb)
			{
				resul = j;
			}
		}
		i ++;
	}
	return (resul);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	j;

	i = 125;

	j = ft_sqrt(i);
	printf("%d", j);

}
*/