/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:40:29 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/20 13:58:25 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i ++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		sign = -sign;
		
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i ++;
	}
	return (res * sign);
}
/*
int	main(int argc, char **str)
{
	argc = 0;
	argc = ft_atoi(str[1]);
	printf("%d\n", argc);
}
*/
