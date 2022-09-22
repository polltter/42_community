/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:04:36 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/15 18:07:52 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_alpha(char c);
char	convert_letter(char c);

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	i = -1;
	if (argc > 2 || argc == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][++i] != '\0')
	{
		if (is_alpha(argv[1][i]))
		{
			c = convert_letter(argv[1][i]);
			write (1, &c, 1);
		}
		else
			write (1, &argv[1][i], 1);
	}
	write (1, "\n", 1);
	return (0);
}

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	convert_letter(char c)
{
	if ((c >= 'a' && c <= 'z') && (c + 1 > 'z'))
			c = 1 - ('z' - c) + 'a' - 1;
	else if ((c >= 'A' && c <= 'Z') && (c + 1 > 'Z'))
			c = 1 - ('Z' - c) + 'A' - 1;
	else
		c += 1;
	return (c);
}
