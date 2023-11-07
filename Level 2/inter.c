/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:41:00 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 11:51:42 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_char(char c, char *str, int len)
{
	int	i;

	i = 0;
	while (str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!check_char(argv[1][i], argv[1], i) && check_char(argv[1][i], argv[2], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
