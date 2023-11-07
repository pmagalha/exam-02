/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:41:53 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/02 14:46:36 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = 'z' - argv[1][i] + 'a';
				write (1, &argv[1][i], 1);
                        	i++;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                        {       
                                argv[1][i] = 'Z' - argv[1][i] + 'A';
				write (1, &argv[1][i], 1);
                        	i++;
                        }
			else
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
}

