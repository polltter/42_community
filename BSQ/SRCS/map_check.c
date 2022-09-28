/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:05:16 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/28 08:30:13 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_check_map_2(int f, char c, t_file mapS)
{
	int	o;
	int	i;

	o = 0;
	while (c != EOF && i != 1)
	{
		i = 1;
		read(f, &c, 1);
		while (c != '\n' && c != EOF)
		{
			if (c == mapS.empty)
				o++;
			else if (c != mapS.obs)
				return (0);
			read(f, &c, 1);
			i++;
		}
		if (i != mapS.colunas + 1 && i != 1)
			return (0);
	}
	if (o == 0)
		return (0);
	return (1);
}

int	ft_check_map(char *map, t_file mapS)
{
	int		f;
	char	c;
	int		i;

	f = open(map, 0);
	read(f, &c, 1);
	i = 0;
	while (c != '\n')
	{
		read(f, &c, 1);
		i++;
	}
	if (i < 4 || mapS.empty == mapS.obs || mapS.empty == mapS.full \
	|| mapS.obs == mapS.full || mapS.empty < 32 \
	|| mapS.empty > 127 || mapS.obs < 32 || mapS.obs > 127 \
	|| mapS.full < 32 || mapS.full > 127)
		return (0);
	if (!(ft_check_map_2(f, c, mapS)))
		return (0);
	return (1);
}

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
