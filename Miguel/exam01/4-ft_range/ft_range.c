/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:39:58 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/16 14:14:28 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	*arr;
	int	i;

	i = -1;
	size = start - end--;
	arr = malloc(size * sizeof(int));
	while (++end <= start)
		arr[++i] = end;
	return (arr);
}

int	main(void)
{
	int	i;
	int	start = 15;
	int	end = -15;

	for (i = 0; i <= start - end; i++)
		printf("%d ", ft_range(start, end)[i]);
	return (0);
}