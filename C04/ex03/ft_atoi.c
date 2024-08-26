/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:48:33 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/12 11:52:38 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	aux;
	int	i;
	int	retur;

	i = 0;
	retur = 0;
	aux = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i ++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			aux *= -1;
		i ++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		retur = retur * 10 + (str[i] - '0');
		i ++;
	}
	return (retur * aux);
}
/*
#include <unistd.h>
#include <stdio.h>	
int main(void)
{
    char test[20] = "    --+1234";
    int j = ft_atoi(test);
    printf("%d", j);
}
*/
