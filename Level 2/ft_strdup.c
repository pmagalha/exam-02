/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:53:14 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/19 10:00:06 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	int	len;
	char	*newstr;

	i = 0;
	j = 0;
	len = 0;
	while (src[i])
	{
		len++;
		i++;
	}
	i = 0;
	newstr = malloc(sizeof(char) * len + 1);
	if (!newstr)
		return (NULL);
	while (i <= len)
	{
		newstr[j] = src[i];
		i++;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
/*
int	main(int argc, char **argv)
{
	printf("Mine: %s\n", ft_strdup(argv[1]));
	printf("Lib: %s\n", strdup(argv[1]));
}*/
