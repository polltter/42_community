/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:04:20 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/15 12:20:28 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
	{
		i++;
		if (argv[1][i] == '\0')
		{
			write (1, "\n", 1);
			return (0);
		}
	}
	i--;
	while (!(ft_isspace(argv[1][++i])) && argv[1][i] != '\0')
		write (1, &argv[1][i], 1);
	write (1, "\n", 1);
	return (0);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
