/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:47:21 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/12 19:54:19 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count ++;
		str ++;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	long int n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

void	ft_show_tab(struct s_stock_str *ptr)
{
	unsigned int i;
	
	i = 0;
	while (ptr[i].str)
	{
		write (1, ptr[i].str, ft_strlen(ptr[i].str));
		write (1, "\n", 1);
		ft_putnbr(ptr[i].size);
		write (1, "\n", 1);
		write (1, ptr[i].copy, ft_strlen(ptr[i].copy));
		write (1, "\n", 1);
		i ++;		
	}
	free (ptr);
}
/*
char	*ft_strdup (char *str)
{
	int i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int i;
	int j;
	struct s_stock_str *ptr;

	i = 0;
	j = 0;
	ptr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);	
	while (i < ac)
	{
		if (av[i] == NULL)
		{
			free (ptr);
			return (NULL);
		}
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = ft_strdup(av[i]);
		ptr[i].copy = ft_strdup(av[i]);
		if (!(ptr[i].str || ptr[i].copy))
			free (ptr);
		i ++;
	}
	ptr[i].str = 0;
	return (ptr);
}

int	main(int a, char **str)
{
	ft_show_tab(ft_strs_to_tab(a - 1, str + 1));
}
*/