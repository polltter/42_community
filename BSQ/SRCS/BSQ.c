/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:11:33 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/27 11:56:33 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	t_file	mapf;
	char 	**matrix;
	t_coord	coord;

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
	coord.x = 0;
	coord.y = 0;
	printf("%d\n", find_coord(mapf, matrix, &coord, 9));
	printf("%d %d\n", coord.x, coord.y);
}
