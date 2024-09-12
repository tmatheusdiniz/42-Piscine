/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:04:10 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/20 19:09:48 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	int i;
	unsigned char resul;

	i = 0;
	resul = 0;
	while ( i < 8)
	{
		resul = (resul << 1) | (octet & 1);
		octet >>= 1;
		i ++;
	}
	return (resul);
}
