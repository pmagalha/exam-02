/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:27:46 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/13 10:30:13 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}        	 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *current;

	current = begin_list;
	while (current != NULL)
	{
		(*f)(current->data);
		current = current->next;
	}
}
