/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:08:16 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/20 17:23:29 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int 	j;

	j = 1;
	if (argc > 1)
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				if (argv[j][i] >= 'A' &&  argv[j][i] <= 'Z')
					argv[j][i] += 32;
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z' && (argv[j][i + 1] == ' '
							|| argv[j][i + 1] == '\t'
							|| argv[j][i + 1] == '\0'))
					argv[j][i] -= 32;
				write (1, &argv[j][i], 1);
				i++;
			}
			j++;
			write (1, "\n", 1);
		}
	}
	else
		write (1, "\n", 1);
}
