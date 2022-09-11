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