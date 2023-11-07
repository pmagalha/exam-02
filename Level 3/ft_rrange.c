/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:01:33 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/19 10:11:59 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*arr;

	i = 0;
	len = start - end;
	if (len < 0)
		len = -len;
	arr = malloc(sizeof(int) * (len + 1));
	if (!arr)
		return (NULL);
	while (i <= len)
	{
		if (start < end)
		{
			arr[i] = end;
			end--;
			i++;
		}
		else
		{
			arr[i] = end;
			end++;
			i++;
		}
	}
	return (arr);
}
/*
int	main(void)
{
	int	*arr = ft_rrange(0, -3);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);

}
*/
