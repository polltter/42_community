/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:11:33 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/26 12:53:17 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int res;
	int i;

	i = -1;
	res = 0;
	while (str[++i])
		res = res * 10 + (str[i] - 48);
	return (res);
}

int	main(int ac, char **av)
{
	int	file;
	int l;
	char empty;
	char obs;
	char full;
	char *buf;
	char c;

	(void) ac;
	l = 1;
	file = open(av[1], 0);
	read(file, &c, 1);
	buf = malloc(100);
	*buf = c;
	while (c != '\n')
	{
		buf++;
		read(file, &c, 1);
		*buf = c;
		l++;
	}
	buf[--l] = '\0';
	printf("%s\n", buf);
	full = buf[l -1];
	obs = buf[l -2];
	empty = buf[l -3];
	buf[l - 3] = '\0';
	l = ft_atoi(buf);
}
