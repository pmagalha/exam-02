/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:40:33 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 17:47:56 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	whiteSpace;

	i = 0;
	whiteSpace = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				whiteSpace = 1;
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				if (whiteSpace)
                                {
                                        write (1, "   ", 3);
                                        whiteSpace = 0;
                                }

				if (argv[1][i] != ' ' && argv[1][i] != '\t')
				{
					write (1, &argv[1][i], 1);
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
	


