/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:32:05 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 09:32:05 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	fact *= ft_recursive_factorial(fact - 1);
	return (fact);
}
