/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:05:31 by pmagalha          #+#    #+#             */
/*   Updated: 2023/08/03 12:35:15 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{
    int j;

    j = 0;
    if (!s1 || !s2)
	{
		return (0);
	}
    while (*s1)
    {
        j = 0;
        while (s2[j])
        {
            if (*s1 == s2[j])
                return((char *) s1);
            j++;
        }
        s1++;
    }
    return (NULL);
}

int main(void)
{
    const char *str = "Hello, World!";
    const char *accept = "oW";

    char *result = ft_strpbrk(str, accept);

    if (result != NULL)
    {
        printf("The first character in '%s' that matches any character in '%s' is: '%c'\n", str, accept, *result);
    }
    else
    {
        printf("No matching characters found in '%s' using '%s'\n", str, accept);
    }

    return 0;
}