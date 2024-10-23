/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:51:43 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/03 14:52:48 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);  
}

void    ft_print_combn_recursive (int nb, int start, int c, int aux[])
{
    int i;
    int j;

    i = 0;
    if (c == nb)
    {
		while (i < nb)
		ft_putchar(aux[i++] + '0');   
    if (aux[0] != 10 - nb)
    {
		ft_putchar(',');
		ft_putchar(' ');  
    }
	return ;
	}
	j = start;
	while (j <= 10 -(nb - c))
	{
		aux[c] = j;
		ft_print_combn_recursive(nb, j + 1, c + 1, aux);
		j ++;
	}
}	

void    ft_print_combn(int n)
{
    int aux[10];
    
    if (n > 0 && n < 10)
        ft_print_combn_recursive(n, 0, 0, aux);
    else
        return ;
}
/*
int main(int a, char **str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    if (a == 2)
    {
       while (str[1][i])
       res = res * 10 + str[1][i++] - '0';
    }
    ft_print_combn(res);    
}
*/