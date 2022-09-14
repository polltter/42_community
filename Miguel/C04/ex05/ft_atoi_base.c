/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:07:30 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/14 12:14:25 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_len(char *base);
int	is_base_valid(char *base);
int	in_base(char c, char *base);
int	get_base_index(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;

	sign = 1;
	i = 0;
	nb = 0;
	if (!is_base_valid(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (in_base(str[i], base))
	{
		nb *= base_len(base);
		nb += get_base_index(str[i], base);
		i++;
	}
	return (nb * sign);
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
