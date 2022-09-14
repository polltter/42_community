/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:02:54 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/13 18:25:26 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*a = "ABA";
	char	*b = "ABZ";

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
	return (0);
}
