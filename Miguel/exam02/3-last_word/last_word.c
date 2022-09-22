/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:37:30 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/15 18:56:18 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	size;

	size = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][size] != '\0')//vai ate ao fim da string
		size++;
	size--;
	while ((argv[1][size] == ' ' || argv[1][size] == '\t') && size >= 0)//a partir do fim, encontra o primeiro non-whitespace
		size--;
	while ((argv[1][size] != ' ' && argv[1][size] != '\t') && size >= 0)//vai ate ao inicio da palavra
		size--;
	size++;
	while ((argv[1][size] != ' ' && argv[1][size] != '\t')
			&& argv[1][size] != '\0')
	{
		write (1, &argv[1][size], 1);
		size++;
	}
	write (1, "\n", 1);
	return (0);
}
