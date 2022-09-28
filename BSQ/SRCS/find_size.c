/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:10:48 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/28 13:58:11 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_find_max_line_or_column(t_file mapf)
{
	int	i;

	i = 0;
	if (mapf.colunas < mapf.lines)
		i = mapf.colunas;
	else
		i = mapf.lines;
	return (i);
}

int	max_col_space(char *str, t_file mapf)
{
	int	i;
	int	max;
	int	counter;

	counter = 0;
	max = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == mapf.obs)
			if (counter > max)
				max = counter;
		counter++;
	}
	return (max);
}

int	find_max_size(t_file mapf, char **matrix)
{
	int	size;
	int	total_lines;
	int	i;

	size = ft_find_max_line_or_column(mapf);
	while (size > 0)
	{
		total_lines = mapf.lines;
		i = -1;
		while (++i < mapf.lines)
		{
			if (max_col_space(matrix[i], mapf) < size)
				total_lines--;
			if (total_lines < size)
				break ;
		}
		if (i == mapf.lines)
		{
			printf("%d\n", size);
			return (size);
		}
		size--;
	}
	return (0);
}
