/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:58:47 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 17:04:14 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				if (argv[1][i + 1] >= 'a' && argv[1][i + 1] <= 'z')
				{
					argv[1][i + 1] -= 32;
					i++;
				}
				if (argv[1][i + 1] >= 'A' && argv[1][i + 1] <= 'A')
				{
					argv[1][i + 1] = argv[1][i + 1];
					i++;
				}
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}

