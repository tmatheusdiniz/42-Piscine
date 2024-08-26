/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:57:05 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/17 23:34:38 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	j;

	j = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	count = max - min;
	*range = malloc(sizeof(int) * count);
	if (!*range)
		return (-1);
	while (j < count)
	{
		(*range)[j] = min;
		j ++;
		min ++;
	}
	return (count);
}
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_putnbr(int nb)
{
	char	test[12];
	char	*str;
	int		i;
	int		j;
	long int	n;
	int		sign;

	n = nb;
	i = 0;
	sign = n < 0;
	if (n == 0)
	{
		test[i ++] = 48;	
	}
	if (sign)
		n = -n;
	while (n > 0)
	{
		test[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		test[i++] = 45;
	test[i] = '\0';
	j = 0;
	str = malloc(i + 1);
	if (!str)
		return NULL;
	while (*test && i >= 0)
	str [j++] = test[--i];
	str [j - 1] = '\0';
	return (str);
}

int	main(void)
{
	int		min;
	int		max;
	int		i;
	int		num;
	int		*ptr;
	char		*buffer;

	min = 10;
	max = 2000;
	i = 0;
	num = ft_ultimate_range(&ptr, min, max);

	printf("Numero de elementos: %d\n", num);

	if (ptr)
	{
        	for (i = 0; i < num; i++)
        	{
			buffer = ft_putnbr(ptr[i]);
            		if (buffer)
            		{
                		write(1, buffer, strlen(buffer));
                		write(1, "\n", 1);
                		free(buffer);
			}
        	}
        	free(ptr);
	}
	return 0;
}
*/
