/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:32:52 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 09:32:52 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	lnb;

	i = 0;
	lnb = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= lnb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
