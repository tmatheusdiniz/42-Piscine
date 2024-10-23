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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i ++;
	return (i);
}

void	print_offset(int n, int i)
{
	
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		
	}
}

int	main(int c, char **v)
{
	int i;

	if (c < 2 || c > 2)
		return (0);
	else
	{
		ft_print_memory(v[1], ft_strlen(v[1]));
	}
}