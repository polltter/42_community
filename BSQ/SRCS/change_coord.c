/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_coord.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:00:04 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/27 12:36:44 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_coord	change_coord(t_file mapf, t_coord *coord, t_coord first_coord, int size)
{
	if (coord->x + 1 + size > mapf.colunas - 1)
	{
		coord->x = 0;
		coord->y = first_coord.y + 1;
		if (coord->y + size > mapf.lines - 1)
		{
			first_coord.x = 0;
			first_coord.y = 0;
		}
	}
	else
		first_coord.x = coord->x + 1;
	return (first_coord);
}

