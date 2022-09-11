int	is_char_lower(char c);

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_char_lower(str[i]))
		{
			c = str[i];
			str[i] = c - 32;
		}	
		i++;
	}
	return (str);
}

int	is_char_lower(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
