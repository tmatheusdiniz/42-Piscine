/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:12:02 by user0010001       #+#    #+#             */
/*   Updated: 2024/09/03 14:53:07 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
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

char convert_hexa(int value) 
{
    if (value >= 0 && value <= 9)
        return '0' + value;
    else 
        return 'a' + (value - 10);
}

void    ft_putstr_non_printable(char *str)
{
    int i;
    int j;
    char ascii[(ft_strlen(str) * 4) + 1];

    i = 0;
    j = 0;
    while (str[j])
    {
        if (str[j] <= 31 || str[j] >= 127)
        {
            ascii[i++] = '\\';
            ascii[i++] = convert_hexa(((unsigned char)str[j] >> 4) & 0xF);
            ascii[i++] = convert_hexa((unsigned char)str[j] & 0xF);
        }
        else
            ascii[i++] = str[j];
        j ++;
    }
    ascii[i] ='\0';

    write (1, ascii, i);
}
/*
int	main(void)
{
	char *str = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
}
*/