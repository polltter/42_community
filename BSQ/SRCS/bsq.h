/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:09:54 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/26 15:34:20 by mvenanci         ###   ########.fr       */
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

t_file	first_line_map(char *str);
int		ft_maplength(char *str);

#endif
