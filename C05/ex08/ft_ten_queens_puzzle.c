/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:56:51 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/03 18:46:39 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_teen_queens_puzzle(void)
{
	int queens[10];
	int solutions;

	solutions = 0;

	ft_teen_queens_puzzle_recursive(queens, 0, &solutions);
	return (solutions);
}

#include <stdio.h>

int	main(void)
{
	printf(" Number solutions: %d", ft_teen_queens_puzzle());
	return (0);
}