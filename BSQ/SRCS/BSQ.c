/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:11:33 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/26 14:03:11 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = -1;
	res = 0;
	while (str[++i])
		res = res * 10 + (str[i] - 48);
	return (res);
}

int	main(int ac, char **av)
{
	t_file	mapf;
	char	c;

	(void) ac;
	mapf.l = 1;
	mapf.file = open(av[1], 0);
	read(mapf.file, &c, 1);
	while (c != '\n')
	{
		read(mapf.file, &c, 1);
		mapf.l++;
	}
	mapf.buf = (char *)malloc(sizeof(char) * l);
	close(mapf.file);
	mapf.file = open(av[1], 0);
	mapf.l = 0;
	read(mapf.file, &c, 1);
	mapf.buf[mapf.l] = c;
	while (c != '\n')
	{
		read(mapf.file, &c, 1);
		mapf.buf[++mapf.l] = c;
	}
	mapf.buf[mapf.l] = '\0';
	printf("%s\n", mapf.buf);
	mapf.full = mapf.buf[mapf.l - 1];
	mapf.obs = mapf.buf[mapf.l - 2];
	mapf.empty = mapf.buf[mapf.l - 3];
	mapf.buf[mapf.l - 3] = '\0';
	mapf.l = ft_atoi(mapf.buf);
	printf("%d\n", mapf.l);
	close(mapf.file);
}
