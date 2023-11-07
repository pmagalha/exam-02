/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:27:20 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 11:33:07 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	n;

	if (a == 0 || b == 0)
		return (0);

	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
	return (n);
}
/*
int	main(int argc, char **argv)
{
	printf("%d", lcm(atoi(argv[1]), atoi(argv[2])));
}*/
