/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:47:01 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/12 12:52:31 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putnbr(int n)
{
	char digits[] = "0123456789";

	if (n >= 10)
		putnbr(n / 10);
	write (1, &digits[n % 10], 1);
}

int	main(int argc, char **argv)
{
	putnbr(argc - 1);
	write (1, "\n", 1);
}
