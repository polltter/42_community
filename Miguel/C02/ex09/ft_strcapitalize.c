int		is_char_alpha(char c);
int		is_char_num(char c);
void	upcase(char *str, int i);
void	lowcase(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_char_alpha(str[i]) || is_char_num(str[i]))
		{
			upcase(str, i);
			i++;
			while (is_char_alpha(str[i]) || is_char_num(str[i]))
			{
				lowcase(str, i);
				i++;
			}
		}
		i++;
	}
	return (str);
}

int	is_char_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_char_num(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

void	upcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
}

void	lowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
}
