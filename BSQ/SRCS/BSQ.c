/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:11:33 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/27 20:02:55 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	t_file	mapf;
	char	**matrix;
	t_coord	first_coord;
	t_coord	curr_coord;
	t_coord	*coord;
	int		suc;
	int		size;
	int		i;
	
	i = 1;
	coord = &curr_coord;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		if (open(av[i], 0) == -1)
		{
			write (1, "map error", 11);
		}
		mapf = first_line_map(av[i]);
		if (!mapf.lines) //validacao da priemira linha do mapa
		{
			write (1, "map error", 11);
		}
		mapf.colunas = ft_maplength(av[i]);
		if (!(ft_check_map(av[i], mapf))) //validaçao do mapa
		{
			write (1, "map error", 11);
		}
		matrix = create_matrix(mapf, av[i]);
		first_coord.x = 0;
		first_coord.y = 0;
		coord->x = 0;
		coord->y = 0;
		size = ft_find_sqmax(mapf);
		suc = find_coord(mapf, matrix, coord, size);
		while (!suc && size > 0)
		{
			coord->x = first_coord.x;
			coord->y = first_coord.y;
			suc = find_coord(mapf, matrix, coord, size);
			if (suc)
				break ;
			first_coord = change_coord(mapf, coord, first_coord, size);
			if (first_coord.x == 0 && first_coord.y == 0)
			{
				size--;
			}
		}
		if (suc)
			ft_put_sq(matrix, mapf, size, first_coord);
		else
			write (1, "map error\n", 11);
		write (1, "\n", 1);
		close (mapf.file);
		free(matrix);
		i++;
	}
}
