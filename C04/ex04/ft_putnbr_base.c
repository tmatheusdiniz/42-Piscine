/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:59:11 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/19 15:17:22 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i] || !base[i + 1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int long	n;
	int			len;

	if (ft_base(base) == 0)
		return ;
	len = 0;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	while (base[len] != '\0')
		len++;
	if (n >= len)
	{
		ft_putnbr_base(n / len, base);
	}
	write (1, &base[n % len], 1);
}
/*
int	main(void)
{
	int i;
	char *base;

	i = 20;
	base = "abcd";

	ft_putnbr_base(i, base);
}
*/