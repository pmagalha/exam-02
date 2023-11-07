/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:00:22 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 12:14:06 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
                num2 = atoi(argv[2]);
		if (num1 > 0 && num2 > 0)
		{
			while (num1 != num2)
			{
				if (num1 <= num2)
					num2 -= num1;
				else
					num1 -= num2;
			}
			printf("%d", num1);
		}
	}
	printf("\n");
}


