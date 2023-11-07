/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:20:58 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 17:24:33 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*current;
	int	aux;
	t_list	*begin;

	current = lst;
	begin = lst;
	while (current->next != NULL)
	{
		if ((*cmp)(current->data, current->next->data) == 0)
		{
			aux = current->data;
			current->data = current->next->data;
			current->next->data = aux;
			current = begin;
		}
		else
			current = current->next;
	}
	current = begin;
	return (begin);
}

