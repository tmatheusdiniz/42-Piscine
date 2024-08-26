/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:19:47 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 20:39:49 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char	test[12];
    ft_strncpy(test, "Hello Worl", 10);
    write(1, test, 10);
}
*/
