/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:14:55 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/14 10:58:09 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

int		base_len(char *base);
int		is_base_valid(char *base);
void	convert_to_base(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	if (!is_base_valid(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr == INT_MIN)
	{
		write(1, &base[2], 1);
		nbr = 147483648;
	}
	convert_to_base(nbr, base);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base_len(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}

void	convert_to_base(int nbr, char *base)
{
	int	base_length;
	int	remains[100];
	int	i;

	i = 0;
	base_length = base_len(base);
	while (nbr != 0)
	{
		remains[i] = nbr % base_length;
		nbr /= base_length;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &base[remains[i]], 1);
		i--;
	}
}
