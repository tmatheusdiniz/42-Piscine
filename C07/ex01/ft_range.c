/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:51:49 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/17 23:34:32 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	count;
	int	j;

	j = 0;
	if (min >= max)
		return (0);
	count = max - min;
	ptr = malloc(sizeof(int) * count);
	while (min < max)
	{
		ptr[j] = min;
		min ++;
		j ++;
	}
	return (ptr);
}
/*
int	*ft_range(int min, int max);
char	*ft_putnbr(int nb);
#include <unistd.h>

char	*ft_putnbr(int nb)
{
	char	test[12];
	char	*str;
	int		i;
	int		j;
	int		aux;

	i = 0;
	aux = nb < 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		nb *= (-1);
	}
	while (nb > 0)
	{
		test[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (aux == 1)
		test[i++] = 45;
	j = 0;
	str = malloc(i + 1);
	while (*test)
	str [j++] = test[--i];
	str[j] = '\0';
	return (str);
}

int	main(void)
{
	int		i;
	int		j;
	int		x;
	int		*str;
	char	*buffer;

	i = 10;
	j = 20;
	x = 0;
	str = ft_range(i, j);

	if (str)
    {
        for (int x = 0; x < j - i; x++)
        {
            buffer = ft_putnbr(str[x]);
            if (buffer)
            {
                write(1, buffer, strlen(buffer));
                write(1, "\n", 1);
                free(buffer);
            }
        }
        free(str);
    }
    return 0;
}
*/