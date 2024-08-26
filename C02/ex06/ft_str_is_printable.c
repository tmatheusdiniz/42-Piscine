/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 21:57:51 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/06 23:57:24 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] < 32 || str[i] > 126)
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
	j = ft_str_is_printable(test);
	printf("%d\n", j);
}
*/
