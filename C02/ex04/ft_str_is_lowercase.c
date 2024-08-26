/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:13:44 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/06 23:56:29 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] < 97 || str[i] > 122)
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

	strcpy(test, "aacbj");
	j = ft_str_is_lowercase(test);
	printf("%d\n", j);
}
*/
