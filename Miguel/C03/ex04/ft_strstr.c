/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:23:17 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/13 17:43:07 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count_to_find;
	int	len_to_find;

	i = 0;
	len_to_find = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		count_to_find = 0;
		while (str[i + count_to_find] == to_find[count_to_find]
			&& to_find[count_to_find] != '\0')
			count_to_find++;
		if (count_to_find == len_to_find)
			return (str + i);
		i += count_to_find;
		i++;
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
