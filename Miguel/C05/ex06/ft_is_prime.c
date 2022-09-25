/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:33:01 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 09:33:01 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long int	i;
	long int	lnb;

	lnb = nb;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= lnb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
