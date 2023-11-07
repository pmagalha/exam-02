/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_removeif.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:32:56 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/22 12:40:14 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*prev;

	current = *begin_list;
	prev = NULL;
	while (current != NULL)
	{
		if (((*cmp)(data_ref, current->data)) == 0)
		{
			if (prev == NULL)
			{
				*begin_list = current->next;
				free(current);
				current = *begin_list;
			}
			else
			{
				prev->next = current->next;
				free(current);
				current = prev->next;
			}
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}

				


