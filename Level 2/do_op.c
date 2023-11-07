/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:09:08 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/12 12:15:05 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int res;

	res = 0;
	if (argc == 4)
	{
		if (argv[2][0] == '+')
		{
			res = (atoi(argv[1]) + atoi(argv[3]));
			printf("%d\n", res);
		}
		else if (argv[2][0] == '-')
                {
                        res = (atoi(argv[1]) - atoi(argv[3]));
                        printf("%d\n", res);
                }
		else if (argv[2][0] == '/')
                {
                        res = (atoi(argv[1]) / atoi(argv[3]));
                        printf("%d\n", res);
                }
		else if (argv[2][0] == '*')
                {
                        res = (atoi(argv[1]) * atoi(argv[3]));
                        printf("%d\n", res);
                }
		else if (argv[2][0] == '%')
                {
                        res = (atoi(argv[1]) % atoi(argv[3]));
                        printf("%d\n", res);
                }
	}
	else
		write (1, "\n", 1);
}
