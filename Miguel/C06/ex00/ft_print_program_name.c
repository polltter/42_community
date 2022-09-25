/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:06:22 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 10:06:22 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	argc++;
	while (argv[0][++i] != '\0')
		write (1, &argv[0][i], 1);
	write (1, "\n", 1);
	return (0);
}
