/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:27:35 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 19:16:06 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = ft_strlen(dest);
	n = 0;
	if (size <= i)
	{
		return (size + ft_strlen(src));
	}
	while (src[n] != '\0' && size > i + 1)
	{
		dest[i] = src[n];
		n ++;
		i ++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[n]));
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char test[15] = "Hello";
	char test2[10] = " Worldaaad";
	unsigned aux = ft_strlcat(test, test2, 15);
	printf("%d", aux);
}
*/
