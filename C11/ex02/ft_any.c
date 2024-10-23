/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:43:47 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/09 23:12:22 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
		{
			return (1);
		}
		i ++;
	}
	return (0);
}
/*
#include <stdio.h>
int	is_zero(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '0')
			return (1);
		i ++;
	}
	return (0);
}

int	main(void)
{
	int i;
	char *matrix[] = {"00000", "00100", NULL};
	
	i = 0;
	printf("%d", i = ft_any(matrix, &is_zero));
}
*/