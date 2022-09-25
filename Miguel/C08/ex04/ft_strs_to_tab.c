/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:43:03 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/25 09:27:21 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

char	*ft_strdup(char *src);
int		ft_str_len(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char**av)
{
	int				i;
	t_stock_str		*strs;
	int				len;

	i = -1;
	strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (++i < ac)
	{
		printf("entrou no while %d vezes.\n", i);
		len = ft_str_len(av[i]);
		strs[i].size = len;
		strs[i].str = av[i];
		strs[i].copy = ft_strdup(strs[i].str);
	}
	strs[i].size = 0;
	strs[i].str = 0;
	strs[i].copy = 0;
	return (strs);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	i = -1;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(char) + (len + 1));
	if (src == 0)
		return (0);
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
