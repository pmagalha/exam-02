/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rever_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:04:47 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/20 13:11:27 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	return (octet & 1) << 7 |
		(octet & 2) << 5 |
		(octet & 4) << 3 |
		(octet & 8) << 1 |
		(octet & 16) >> 1 |
		(octet & 32) >> 3 |
		(octet & 64) >> 5 |
		(octet & 128) >> 7;
}

void	print_bits(unsigned char octet)
{
	int	i;
	int	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	print_bits(atoi(argv[1]));
	write (1, "\n", 1);
	print_bits(reverse_bits(atoi(argv[1])));
}






	
