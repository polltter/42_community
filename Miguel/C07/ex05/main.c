/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:59:30 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/23 13:31:27 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int		main(void)
{
	int		str_n;
	char	*str;
	char	*sep;
	char	**strs;

	str = "    ";
	sep = " ";
	strs = ft_split(str, sep);
	str_n = 0;
	while (strs[str_n] != 0)
	{
		printf("[%d]: %s\n", str_n, strs[str_n]);
		str_n++;
	}
	free(strs);
	return (0);
}
