/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:04:56 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 17:17:19 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	len = start - end;
	if (len < 0)
		len = -len;
	res = malloc(sizeof(int) * (len + 1));
	if (!res)
		return (NULL);
	while (len >= i)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}
/*
int	main(void)
{
	int	*arr;

	arr = ft_range(0, -3);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
}

			
*/
