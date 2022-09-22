/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:49:36 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 16:49:36 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = -1;
	min--;
	while (++min < max)
		tab[++i] = min;
	*range = tab;
	return (i + 1);
}
