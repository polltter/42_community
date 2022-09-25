/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:15:24 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/22 10:30:05 by mvenanci         ###   ########.fr       */
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			i;
	long int	nb;
	char		*nbr_in_base;

	if (is_base_valid(base_from) && is_base_valid(base_to))
	{
		i = skip_white_plus_minus(nbr);
		nb = convert_to_dec(i, base_from, nbr);
		if (i < 0 && nb != 0)
		{
			nbr_in_base = (char *)malloc(sizeof(char) \
			* find_size(nb, base_to) + 2);
			nbr_in_base[find_size(nb, base_to)] = '-';
			nbr_in_base[find_size(nb, base_to) + 1] = 0;
		}
		else
		{
			nbr_in_base = (char *)malloc(sizeof(char) \
			* find_size(nb, base_to) + 1);
			nbr_in_base[find_size(nb, base_to)] = 0;
		}
		return (convert_to_base(nb, base_to, nbr_in_base));
	}
	else
		return (NULL);
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
			if (base[j] == base[i] || (base[j] == '+' || base[j] == '-')
				|| ((base[j] >= 9 && base[j] <= 13) || base[j] == 32))
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}

int	in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
