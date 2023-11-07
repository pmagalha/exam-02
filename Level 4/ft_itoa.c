/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:32:13 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 17:37:46 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648");

	int	n;
	int	len;
	char	*res;

	n = nbr;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	res = malloc(sizeof(int) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
		return ("0");
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}
/*
int	main(int argc, char **argv)
{
	printf("%s", ft_itoa(atoi(argv[1])));
}*/
