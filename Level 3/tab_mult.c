/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:29:02 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/19 09:37:25 by pmagalha         ###   ########.fr       */
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

void	putnbr(int n)
{
	char digits[] = "0123456789";

	if (n >= 10)
		putnbr(n / 10);
	write (1, &digits[n % 10], 1);
}


int	main(int argc, char **argv)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	if (argc == 2)
	{
		while (i <= 9)
		{
			putnbr(i);
			write (1, " x ", 3);
			putnbr(ft_atoi(argv[1]));
			write (1, " = ", 3);
			res = i * ft_atoi(argv[1]);
			putnbr(res);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}



