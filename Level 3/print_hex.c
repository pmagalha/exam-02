/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:59:43 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/19 12:03:28 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -sign;
		str++;
	}
	while (*str)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

void	print_hex(int	n)
{
	char digits[] = "0123456789abdcef";

	if (n >= 16)
		print_hex(n / 16);
	write (1, &digits[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
}

