/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:34:20 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 18:28:18 by mreinald         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	aux;

	i = 0;
	aux = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (aux && str[i] >= 97 && str[i] <= 122)
		{
			str [i] -= 32;
			aux = 0;
		}
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			if (str [i] >= 48 && str[i] <= 57)
			{
				aux = 0;
			}
			else
				aux = 1;
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
	char	test[50];
	int		i;

	i = 0;
	strcpy(test, " ola, étudo bem? 42pAl*vras quarn&ta-e-duas;cinta+e+um");
	ft_strcapitalize(test);
	while (test[i] != '\0')
	{
		printf("%c", test[i]);
		i ++;
	}
}
*/