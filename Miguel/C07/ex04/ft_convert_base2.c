/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:30:24 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/21 18:19:02 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			get_base_index(char c, char *base);
int			in_base(char c, char *base);
int			is_base_valid(char *base);
int			base_len(char *base);
int			skip_white_plus_minus(char *nbr);
long int	convert_to_dec(int i, char *base, char *nbr);
char		*convert_to_base(long int nbr, char *base, char *nbr_in_base);
int			find_size(int nbr, char *base);
char		*ft_strrev(char *str);

int	skip_white_plus_minus(char *nbr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	return (i * sign);
}

long int	convert_to_dec(int i, char *base, char *nbr)
{
	long int	nb;
	long int	sign;

	sign = 1;
	nb = 0;
	if (i < 0)
	{
		i *= -1;
		sign = -1;
	}
	while (in_base(nbr[i], base) && nbr[i] != '\0')
	{
		nb = nb * base_len(base) + get_base_index(nbr[i], base);
		i++;
	}
	return (nb * sign);
}

char	*convert_to_base(long int nbr, char *base, char *nbr_in_base)
{
	int		count;

	if (nbr < 0)
		nbr *= -1;
	count = 0;
	if (nbr == 0)
		nbr_in_base[count] = base[nbr % base_len(base)];
	while (nbr != 0)
	{
		nbr_in_base[count] = base[nbr % base_len(base)];
		nbr /= base_len(base);
		count++;
	}
	return (ft_strrev(nbr_in_base));
}

int	find_size(int nbr, char *base)
{
	int		div;
	int		count;

	count = 0;
	div = nbr;
	if (div == 0)
		return (1);
	while (div != 0)
	{
		div /= base_len(base);
		count++;
	}
	return (count);
}

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	temp;

	size = 0;
	i = -1;
	while (str[size] != 0)
		size++;
	while (++i < size / 2)
	{
		temp = str[size - i - 1];
		str[size - i - 1] = str[i];
		str[i] = temp;
	}
	return (str);
}
