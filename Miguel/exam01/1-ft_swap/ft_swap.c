/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:24:14 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/15 10:27:54 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	a = &x;
	b = &y;
	x = 10;
	y = 42;
	ft_swap(a, b);
	printf("x is now: %d and y is now: %d", x, y);
	return (0);
}