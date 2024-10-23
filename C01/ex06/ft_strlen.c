/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:12:59 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/04 19:29:34 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	sum;

	sum = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			sum += 1;
		}
		str ++;
	}
	return (sum);
}

/*int	main(void)
{
	char	str[20];
	int		sum;

	strcpy(str, "abcdefghijk");
	sum = ft_strlen(str);
	printf("%d\n", sum);
	return (0);
}
*/
