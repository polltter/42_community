/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_coord.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:00:04 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/27 14:49:43 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_coord	change_coord(t_file mapf, t_coord *coord, t_coord first_coord, int size)
{
	if (coord->y + 1 + size > mapf.colunas - 1)
	{
		coord->y = 0;
		coord->x = first_coord.x + 1;
		if (coord->x + size > mapf.lines - 1)
		{
			first_coord.x = 0;
			first_coord.y = 0;
		}
	}
	else
		first_coord.y = coord->y + 1;
	return (first_coord);
}
