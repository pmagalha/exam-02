/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:14:56 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 16:57:14 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	end;
	int	start;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i >= 0)
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
				i--;
			end = i;
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
				i--;
			start = i + 1;
			int	flag = start;
			while (start <= end)
			{
				write (1, &argv[1][start], 1);
				start++;
			}
			if (flag)
			{
				write (1, " ", 1);
			}
		}
	}
	write (1, "\n", 1);
}

