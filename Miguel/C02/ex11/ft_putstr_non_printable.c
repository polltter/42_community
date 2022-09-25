/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:09:25 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/13 09:16:48 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_char_print(unsigned char c);
void	ft_write(unsigned char c);
void	conv_to_hex_and_wirte(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	d;

	i = 0;
	while (str[i] != '\0')
	{
		d = str[i];
		if (!is_char_print(d))
			conv_to_hex_and_wirte(d);
		else
			write(1, &d, 1);
		i++;
	}
}

int	is_char_print(unsigned char c)
{
	if ((c <= 31 || c >= 127))
		return (0);
	return (1);
}

void	conv_to_hex_and_wirte(unsigned char c)
{
	int		i;
	char	div;
	char	rest;

	i = 0;
	write(1, "\\", 1);
	div = c / 16;
	if (div < 10)
		div += '0';
	else
		div += 'a' - 10;
	rest = c % 16;
	if (rest < 10)
		rest += '0';
	else
		rest += 'a' - 10;
	write (1, &div, 1);
	write(1, &rest, 1);
}
