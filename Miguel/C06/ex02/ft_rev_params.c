/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:06:56 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/20 10:06:56 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	letra;
	int	argumento;

	argumento = argc;
	while (--argumento > 0)
	{
		letra = -1;
		while (argv[argumento][++letra] != '\0')
			write(1, &argv[argumento][letra], 1);
		write (1, "\n", 1);
	}
}
