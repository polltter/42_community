/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:13:25 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/12 09:13:25 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str);
int	is_char_upper(char c);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str_len(str))
		return (1);
	while (*(str + i) != '\0')
	{
		if (!is_char_upper(*(str + i)))
			return (0);
		i++;
	}
	return (1);
}

int	is_char_upper(char c)
{
	if ((c >= 'A' && c <= 'Z'))
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
