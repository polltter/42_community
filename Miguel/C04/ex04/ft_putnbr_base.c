/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:14:55 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 09:36:28 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

int		base_len(char *base);
int		is_base_valid(char *base);
void	convert_to_base(long int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	long int	lnbr;

	lnbr = nbr;
	if (!is_base_valid(base))
		return ;
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr *= -1;
	}
	convert_to_base(lnbr, base);
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
		if (base[i] == '+' || base[i] == '-'
			|| ((base[j] >= 9 && base[j] <= 13) || base[j] == 32))
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

void	convert_to_base(long int nbr, char *base)
{
	int	base_length;

	base_length = base_len(base);
	if (nbr / base_length == 0)
	{		
		write (1, &base[nbr % base_length], 1);
		return ;
	}
	else
	{
		convert_to_base(nbr / base_length, base);
		write(1, &base[nbr % base_length], 1);
	}
}
