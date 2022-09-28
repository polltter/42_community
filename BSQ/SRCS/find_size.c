/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:10:48 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/28 12:53:01 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_find_sqmax(t_file mapf)
{
	int	i;

	i = 0;
	if (mapf.colunas < mapf.lines)
		i = mapf.colunas;
	else
		i = mapf.lines;
	return (i);
}

