/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:12:30 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/21 14:54:44 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		in_str(char c, char *str);
int		word_counter(char *str, char *charset, int len);
void	allotcate_memo(char **words, char *str, char *charset, int len);
void	write_split(char **words, char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	int		nbr_words;
	char	**words;
	int		i;

	i = 0;
	while (str[i])
		i++;
	nbr_words = word_counter(str, charset, i);
	words = (char **)malloc((nbr_words + 1) * sizeof(char *));
	words[nbr_words] = NULL;
	allotcate_memo(words, str, charset, i);
	write_split(words, str, charset);
	return (words);
}

int	in_str(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (c == str[i])
			return (1);
	return (0);
}

int	word_counter(char *str, char *charset, int len)
{
	int	i;
	int	word_counter;

	word_counter = 0;
	i = -1;
	while (++i < len)
	{
		while (in_str(str[i], charset))
			i++;
		while (!(in_str(str[i], charset)) && str[i])
		{
			if (in_str(str[i + 1], charset) || str[i + 1] == 0)
				word_counter++;
			i++;
		}
	}
	return (word_counter);
}

void	allotcate_memo(char **words, char *str, char *charset, int len)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	i = -1;
	while (++i < len)
	{	
		c = 0;
		if (!(in_str(str[i], charset)))
		{
			while (!(in_str(str[i], charset)) && str[i])
			{
				c++;
				if ((in_str(str[i + 1], charset)) || str[i + 1] == 0)
				{
					words[j] = (char *)malloc(sizeof(char) * (c + 1));
					words[j][c] = 0;
					j++;
				}
				i++;
			}
		}
	}
}

void	write_split(char **words, char *str, char *charset)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	i = -1;
	while (str[++i])
	{	
		c = 0;
		if (!(in_str(str[i], charset)))
		{
			while (!(in_str(str[i], charset)) && str[i])
			{
				words[j][c] = str[i];
				c++;
				if ((in_str(str[i + 1], charset)) || str[i + 1] == 0)
				{
					j++;
					break ;
				}
				i++;
			}
		}
	}
}
