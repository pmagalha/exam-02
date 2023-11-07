/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:26:28 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/20 11:39:45 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_spaces(char c)
{
	if (c != ' ' && c != '\t' && c != '\0')
		return (0);
	else
		return (1);
}

int	size_of_word(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] && check_spaces(str[i]) == 1)
			i++;
		if (str[i] && check_spaces(str[i]) == 0)
		{
			i++;
			size++;
		}
	}
	return (size);
}

char	*word(char *str)
{
	int	i;
	int	j;
	char	*word;

	i = 0;
	j = 0;
	word = malloc(sizeof(char) * size_of_word(str) + 1);
	if (str[i])
	{
		while (str[i] && check_spaces(str[i]) == 1)
			i++;
		while (str[i] && check_spaces(str[i]) == 0)
		{
			word[j] = str[i];
			j++;
			i++;
		}
	}
	word[j] = '\0';
	return (word);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_spaces(str[i]) == 1)
			i++;
		if (str[i] && check_spaces(str[i]) == 0)
			count++;
		while (str[i] && check_spaces(str[i]) == 0)
                        i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int	i;
	int 	j;
	char	**words;

	i = 0;
	j = 0;
	words = malloc(sizeof(char *) * count_words(str) + 1);
	if (str[i])
	{
		while (str[i])
		{
			while (str[i] && check_spaces(str[i]) == 1)
				i++;
			if (str[i] && check_spaces(str[i]) == 0)
			{
				words[j] = word(&str[i]);
				j++;
				i++;
			}
			while (str[i] && check_spaces(str[i]) == 0)
				i++;
		}
	}
	words[j] = NULL;
	return (words);
}
/*
int	main(void)
{
	char **split;

	split = ft_split("");

	printf("%s\n", split[0]);
	printf("%s\n", split[1]);
}




*/


		

