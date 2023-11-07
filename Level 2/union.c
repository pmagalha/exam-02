/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:22:06 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 11:26:16 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_char(char c, char *str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			j++;
			i++;
		}
		i--;
		while (k <= i)
		{
			if (check_char(argv[1][k], argv[1], k) == 0)
				write(1, &argv[1][k], 1);
			k++;
		}
	}
	write (1, "\n", 1);
}

