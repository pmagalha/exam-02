/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:29:42 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/19 15:09:54 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	get_digit(char c, int digits_in_base)
{
	int max_digit;
	
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (c + 10 - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	digit;

	res = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -sign;
		str++;
	}
	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		res = res * str_base + digit;
		str++;
	}
	return (res * sign);
}
/*
int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
}*/
