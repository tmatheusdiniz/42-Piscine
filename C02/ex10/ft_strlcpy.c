/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:49:19 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 14:22:39 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	aux;
	unsigned int	i;

	i = 0;
	aux = 0;
	while (src[aux] != '\0')
	{
		aux ++;
	}
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (aux);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	test[7];
	char	test2[15] = "Hello World!";
	int		aux;
	
	aux = ft_strlcpy(test, test2, 7);
	printf("%d", aux);
}
*/
