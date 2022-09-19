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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		count = 0;
		while (str[i + count] != '\0' && str[i + count] == to_find[count])
		{
			if (to_find[count + 1] == '\0')
				return (&str[i]);
			count++;
		}
		i++;
	}
	return (0);
}
