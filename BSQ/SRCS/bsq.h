/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:09:54 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/27 15:54:22 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_file
{
	int		file;
	int		colunas;
	int		lines;
	char	empty;
	char	obs;
	char	full;
	char	*buf;

}	t_file;

typedef struct s_coord
{
	int	x;
	int	y;
}	t_coord;

t_file	first_line_map(char *str);
int		ft_maplength(char *str);
int		ft_check_map(char *map, t_file mapS);
char	**create_matrix(t_file mapf, char *str);
int		find_coord(t_file mapf, char **matrix, t_coord *coord, int size);
t_coord	change_coord(t_file mapf, t_coord *coord, t_coord first_coord, int size);
int		ft_find_sqmax(t_file mapf);

#endif
