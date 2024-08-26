/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:53:54 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 14:53:09 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (j < nb && src[j] != '\0')
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
int	main(void)
{
	char test[15] = "Hello";
	char test2[10] = " World";
	char *aux;
	aux = ft_strncat(test, test2, 6);
	write(1, aux, 12);

}
*/
