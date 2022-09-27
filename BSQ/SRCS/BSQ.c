/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:11:33 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/27 12:54:50 by mvenanci         ###   ########.fr       */
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
	
	coord = &curr_coord;
	if (ac == 1)
		return (0);
	if (open(av[1], 0) == -1)
	{
		write (1, "map error\n", 11);
		return (0);
	}
	mapf = first_line_map(av[1]);
	if (!mapf.lines) //validacao da priemira linha do mapa
	{
		write (1, "map error\n", 11);
		return (0);
	}
	mapf.colunas = ft_maplength(av[1]);
	if (!(ft_check_map(av[1], mapf)))//validaçao do mapa
	{
		write (1, "map error\n", 11);
		return (0);
	}
	matrix = create_matrix(mapf, av[1]);
	first_coord.x = 0;
	first_coord.y = 0;
	coord->x = 0;
	coord->y = 0;
	size = 9;
	suc = find_coord(mapf, matrix, coord, size);
	while (!suc && size > 0)
	{
		printf("%d %d\n", first_coord.x, first_coord.y);
		coord->x = first_coord.x;
		coord->y = first_coord.y;
		printf("antes da call da funcao\n");
		suc = find_coord(mapf, matrix, coord, size);
		if (suc)
			break ;
		printf("depois da call da funcao\n");
		first_coord = change_coord(mapf, coord, first_coord, size);
		if (first_coord.x == 0 && first_coord.y == 0)
			size--;
	}
}
