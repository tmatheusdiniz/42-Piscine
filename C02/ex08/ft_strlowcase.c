/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:30:55 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 00:00:53 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i ++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	test[10];
	int		i;

	i = 0;
	strcpy(test, "hellO Worldcc");
	ft_strlowcase(test);
	while (test[i] != '\0')
	{
		printf("%c", test[i]);
		i ++;
	}
}
*/
