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
	int	soma;

	soma = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			soma += 1;
		}
		str ++;
	}
	return (soma);
}

/*int	main(void)
{
	char	strin[20];
	int		soma;

	strcpy(strin, "abcdefghijk");
	soma = ft_strlen(strin);
	printf("%d\n", soma);
	return (0);
}
*/