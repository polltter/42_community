/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:49:20 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 16:49:20 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = -1;
	if (min >= max)
		return (0);
	range = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		range[++i] = min;
		min++;
	}
	return (range);
}
