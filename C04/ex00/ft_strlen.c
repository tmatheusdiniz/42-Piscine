/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 00:22:32 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/12 11:29:34 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char test[] = "Hello World!";
	int	j;

	j = ft_strlen(test);
	printf("%d", j);
}
*/
