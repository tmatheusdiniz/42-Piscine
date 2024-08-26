/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:03:38 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/05 20:12:46 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] < 48 || str[i] > 57)
		{
			i = 0;
			return (i);
		}
		i ++;
	}
	return (1);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	test[10];
	int		j;

	strcpy(test, "0001");
	j = ft_str_is_numeric(test);
	printf("%d\n", j);
}
*/
