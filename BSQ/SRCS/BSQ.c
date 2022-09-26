/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:11:33 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/26 16:21:19 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	t_file	mapf;

	(void) ac;
	//validar mapa
	mapf = first_line_map(av[1]);
	mapf.colunas = ft_maplength(av[1]);
	
}
