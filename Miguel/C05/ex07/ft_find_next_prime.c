/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:34:41 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 09:34:41 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (!ft_is_prime(nb))
		while (!ft_is_prime(nb))
			nb++;
	return (nb);
}

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
