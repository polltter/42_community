/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:11:14 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/15 17:53:20 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_in_str(char *str, char c);
int	in_prev_str(char c, char *str, int index);

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][++i] != '\0')
	{
		if (is_in_str(argv[2], argv[1][i])
			&& !in_prev_str(argv[1][i], argv[1], i))
			write (1, &argv[1][i], 1);
	}
	write (1, "\n", 1);
	return (0);
}

int	is_in_str(char *str, char c)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (c == str[i])
			return (1);
	}
	return (0);
}

int	in_prev_str(char c, char *str, int index)
{
	while (--index >= 0)
	{
		if (c == str[index])
			return (1);
	}
	return (0);
}
