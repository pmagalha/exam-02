/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:21:57 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 13:32:18 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	repeat_char(char c)
{
	int 	count;
	
	count = 0;
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	i = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			count = repeat_char(argv[1][i]);
			while (count > 0)
			{
				write (1, &argv[1][i], 1);
				count--;
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
