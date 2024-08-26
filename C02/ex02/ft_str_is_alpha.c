/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:31:04 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/05 20:12:39 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str [i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
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

	strcpy(test, "hhabc");
	j = ft_str_is_alpha(test);
	printf("%d\n", j);
}
*/
