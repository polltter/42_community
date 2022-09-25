/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:33:01 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/25 10:21:35 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void				ft_putstr(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char**av);
void				ft_putnbr(int nb);

void	ft_show_tab( struct s_stock_str *ptr)
{
	while (ptr->str)
	{
		ft_putstr(ptr->str);
		ft_putnbr(ptr->size);
		ft_putstr(ptr->copy);
		ptr++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		n = nb + '0';
		write (1, &n, 1);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
