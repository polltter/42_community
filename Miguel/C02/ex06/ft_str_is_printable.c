/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:13:43 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/12 09:13:43 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str);
int	is_char_print(char c);

int	ft_str_is_printable(char *str)
{
	int		i;
	char	d;

	i = 0;
	if (!str_len(str))
		return (1);
	while (*(str + i) != '\0')
	{
		d = *(str + i);
		if (!is_char_print(d))
			return (0);
		i++;
	}
	return (1);
}

int	is_char_print(char c)
{
	if ((c <= 31 || c >= 127))
		return (0);
	return (1);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}
