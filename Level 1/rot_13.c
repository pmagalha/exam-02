/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:22:01 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/09 16:25:23 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rot_13(char c)
{
	if (c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
		return (c + 13);
	else if (c >= 'n' && c <= 'z' || c >= 'N' && c <= 'Z')
                return (c - 13);
	else
		return (c);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	while (argv[1][i])	
	{
		argv[1][i] = rot_13(argv[1][i]);
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
	

