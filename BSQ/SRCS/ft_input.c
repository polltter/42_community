/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:30:25 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/27 20:30:28 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_input(t_file mapf)
{
	char	c;
	int		i;
	int		fd;

	i = 0;
	fd = open("map_stdin", 	O_CREAT | O_WRONLY, 0600);
	while (c != '\n')
	{
		read(STDIN_FILENO, &c, 1);
		write (fd, &c, 1);
	}
	mapf = first_line_map("map_stdin");
	while (i < mapf.lines)
	{
		read(STDIN_FILENO, &c, 1);
		write(fd, &c, 1);
		while (c != '\n')
		{
			read(STDIN_FILENO, &c, 1);
			write(fd, &c, 1);
		}
		i++;
	}
	return ("map_stdin");
}
