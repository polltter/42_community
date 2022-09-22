/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:54:28 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/22 13:59:07 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = -1;
		j = -1;
		while (av[1][++i])
		{
			while (av[2][++j])
			{
				if (av[1][i] == av[2][j])
				{
					if (i == ft_strlen(av[1]) - 1)
					{
						ft_putstr(av[1]);
						return (0);
					}
					break ;
				}
			}
		}
	}
	write(1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}
