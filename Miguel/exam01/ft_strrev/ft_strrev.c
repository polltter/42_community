/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:27:54 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/15 13:41:14 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	temp;

	i = -1;
	size = ft_strlen(str);
	while (++i < size / 2)
	{
		temp = str[size - i - 1];
		str[size - i - 1] = str[i];
		str[i] = temp;
	}
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	str[] = "Helllo";
	
	printf("%s\n", ft_strrev(str));
	return (0);
}