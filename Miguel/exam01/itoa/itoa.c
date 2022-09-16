/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:36:59 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/16 16:39:49 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_punbr_arr(char *arr, int nbr, int index, int sign);

char	*ft_itoa(int nbr)
{
	int		div;
	int		i;
	char	*arr;
	int		sign;

	if (nbr < 0 && nbr < INT_MIN)
	{
		sign = -1;
		nbr *= -1;
	}
	i = 0;
	div = nbr;
	while (div)
	{
		i++;
		div /= 10;
	}
	arr = malloc(i * sizeof(char));
	ft_punbr_arr(arr, nbr, ++i, sign);
	return (arr);
}

void	ft_punbr_arr(char *arr, int nbr, int index, int sign)
{
	if (nbr == INT_MIN)
	{
		sign = -1;
		nbr += 1;
		nbr *= -1;	
		arr[--index] = (nbr) % 10 + '1';
	}
	else
		arr[--index] = nbr % 10 + '0';
	if (nbr > 0)
		ft_punbr_arr(arr, nbr / 10, index, sign);
	if (sign == -1 && --index == 0)
		arr[index] = '-';
	return ;
}

int	main(void)
{
	printf("%s\n", ft_itoa(INT_MIN));
	return (0);
}