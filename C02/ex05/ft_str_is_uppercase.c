/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:28:48 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/06 23:56:25 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] < 65 || str[i] > 90)
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

	strcpy(test, "AAAA");
	j = ft_str_is_uppercase(test);
	printf("%d\n", j);
}
*/
