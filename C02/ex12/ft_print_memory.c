/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:44:16 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/21 21:03:24 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(long unsigned n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char *addr, unsigned int size, int i)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (j < size && addr[i + j])
			ft_putnbr_base(addr[i + j]);
		else
		{
			ft_putchar(' ');
		}
		if (j % 2 == 1)
			ft_putchar(' ');
		j ++;
	}
}

void	print_ascii_content(unsigned char *addr, unsigned int size, unsigned int i)
{
		unsigned int j = 0;

		while (j < 16 && (i + j) < size)
		{
			if (addr[i + j] >= 32 && addr[i + j] <= 126)
				ft_putchar(addr[i + j]);
			else
				ft_putchar('.');
		j++;
	}
}

void	print_offset(long unsigned int n)
{
	int				size;
	long unsigned	k;

	k = n;
	size = 1;
	while (k >= 16)
	{
		k /= 16;
		size++;
	}
	while (size++ < 16)
		ft_putchar('0');
	ft_putnbr_base(n);
	ft_putchar (':');
	ft_putchar(' ');
}

void	ft_putnbr_base(long unsigned n)
{
	char	*base = "0123456789abcdef";
	if (n >= 16)
		ft_putnbr_base(n / 16);
	ft_putchar(base[n % 16]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*n;

	n = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_offset((long unsigned int)&n[i]);
		ft_print_hex(n, size, i);
		print_ascii_content(n, size, i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

int main()
{
	char *str;
	int	size;

	size = 0;
	str = "Bonjo";
	while (str[size])
		size++;
	ft_print_memory(str, size);
} 
