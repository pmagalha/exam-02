/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:04:38 by pmagalha          #+#    #+#             */
/*   Updated: 2023/10/19 12:09:01 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.x < 0 || cur.y < 0 || cur.x >= size.x || cur.y >= size.y
			|| tab[cur.y][cur.x] != to_fill)
		return ;

	tab[cur.y][cur.x] = 'F';

	t_point right = { cur.x + 1, cur.y };
	t_point left = { cur.x - 1, cur.y };
	t_point up = { cur.x, cur.y - 1 };
	t_point down = { cur.x, cur.y + 1 };

	fill(tab, size, right, to_fill);
	fill(tab, size, left, to_fill);
	fill(tab, size, up, to_fill);
	fill(tab, size, down, to_fill);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
