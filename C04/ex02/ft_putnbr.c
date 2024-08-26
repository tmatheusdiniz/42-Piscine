/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 00:49:12 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/12 11:38:33 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	test[12];
	int		i;
	int		aux;
	long int n;
	
	n = nb;
	i = 0;
	aux = 0;
	if (n == 0)
		test[i++] = '0';
	if (n < 0 )
	{
		aux = 1;
		n *= (-1);
	}
	while (n > 0)
	{
		test[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (aux == 1)
		test[i++] = 45;
	while (i > 0)
		write(1, &(test[--i]), 1);
}

int    main(void)
{
    int    i;

    i = 0; 
    ft_putnbr(i);
}

