/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:31:47 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 09:31:47 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	fact = nb;
	if (nb == 0)
		return (1);
	while (--nb > 0)
		fact *= nb;
	return (fact);
}
