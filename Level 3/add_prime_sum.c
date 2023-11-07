/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:02:40 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 13:09:36 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
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

void	putnbr(int n)
{
	char digits[] = "0123456789";

	if (n >= 10)
		putnbr (n / 10);
	write (1, &digits[n % 10], 1);
}

int	is_prime(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	n;
	int	res;

	res = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		while (n >= 0)
		{
			if (is_prime(n) == 0)
				res += n;
			n--;
		}
		putnbr(res);
		write (1, "\n", 1);
	}
	else
		write (1, "0\n", 2);
}

			

