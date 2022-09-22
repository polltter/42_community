/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:30:07 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/15 10:35:09 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

char	*ft_rev_print(char *str)
{
	int	str_length;
	int	i;

	str_length = ft_strlen(str);
	i = str_length;
	while (--i >= 0)
		write (1, &str[i], 1);
	write (1, "\n", 1);
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
	char	*str = "Hello";

	ft_rev_print(str);
	return (0);
}
