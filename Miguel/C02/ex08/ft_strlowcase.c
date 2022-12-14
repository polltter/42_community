/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:14:39 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/12 09:14:39 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_upper(char c);

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_char_upper(str[i]))
		{
			c = str[i];
			str[i] = c + 32;
		}	
		i++;
	}
	return (str);
}

int	is_char_upper(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
