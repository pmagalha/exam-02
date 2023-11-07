/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:44:15 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/19 16:52:54 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	res;

	i = 0;
	res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
		{
			res = tab[i];
		}
		else
			i++;
	}
	return (res);
}
/*
int	main(void)
{
	int maxi;
	int	arr[] = { 1, 2 ,3 };

	maxi = max(arr, 3);

	printf("%d", maxi);
}*/
