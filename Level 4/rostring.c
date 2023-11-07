/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:38:27 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 16:01:19 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		if (str[i] && str[i] == ' ' || str[i] == '\t')
			count++;
		while (str[i] && str[i] == ' ' || str[i] == '\t')
                        i++;
	}
	return (count);
}

void	epur(char *str)
{
	int	i;
	int	whiteSpace;

	i = 0;
	whiteSpace = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			whiteSpace = 1;
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (whiteSpace == 1)
			{
				write (1, " ", 1);
				whiteSpace = 0;
			}
			write (1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	count;

	count = count_words(argv[1]);
	i = 0;
	if (argc == 2 && count_words(argv[1]) == 1)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
                        i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write (1, &argv[1][i], 1);
                        i++;
		}
	}
	else if (argc == 2 && count_words(argv[1]) > 1)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		start = i;
		epur(&argv[1][start]);
		write (1, " ", 1);
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
       		while (argv[1][i] != ' ' && argv[1][i] != '\t')
		{
	                write (1, &argv[1][i], 1);
			i++;
		}
	}
	else if (argc > 2)
	{
		int	j = 0;
		while (argv[1][j])
		{
			write (1, &argv[1][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
}
