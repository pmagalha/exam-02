/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:45:39 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/19 11:54:51 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n)
{
	char digits[] = "0123456789";

	if (n >= 10)
		putnbr(n / 10);
	write (1, &digits[n % 10], 1);
}

int	main(void)
{
	int i;
	
	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
                        write (1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else if (i % 3 == 0)
                        write (1, "fizz", 4);
		else
			putnbr(i);
		write (1, "\n", 1);
		i++;
	}
}

