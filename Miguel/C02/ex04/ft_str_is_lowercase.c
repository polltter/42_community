/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:13:16 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/12 09:13:16 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str);
int	is_char_lower(char c);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!str_len(str))
		return (1);
	while (*(str + i) != '\0')
	{
		if (!is_char_lower(*(str + i)))
			return (0);
		i++;
	}
	return (1);
}

int	is_char_lower(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}
