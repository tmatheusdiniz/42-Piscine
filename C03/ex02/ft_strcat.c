/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:41:57 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 14:54:31 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j ++;
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char test[11] = "Hello";
	char test2[6] = "World";
	ft_strcat(test, test2);
	
	
	printf("%s", test); 
	//printf("\n");
	//strcpy(test, "Hello");
	//strcat (test, test2);
	//printf("%s", test); 
	
}
*/
