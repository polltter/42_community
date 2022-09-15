/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:15:05 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/15 19:39:48 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_in_str_1(char c, char *str);
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
		if (!in_prev_str(argv[1][i], argv[1], i))
			write (1, &argv[1][i], 1);
	}
	i = -1;
	while (argv[2][++i] != '\0')
	{
		if (!in_prev_str(argv[2][i], argv[2], i)
			&& !(is_in_str_1(argv[2][i], argv[1])))
			write (1, &argv[2][i], 1);
	}
	write (1, "\n", 1);
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

int	is_in_str_1(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}
