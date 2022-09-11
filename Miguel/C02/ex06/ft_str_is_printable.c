/* 
In this exercise, if str starts with a null char (que corresponde na ASCII ao int 0)
ele considera que a string é vazia. Nao sei se é suposto testar para ver que tem algum char a seguir
ou se deixo considerado que a str esta vazia. 
*/


int	str_len(char *str);
int	is_char_print(char c);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str_len(str))
		return (1);
	while (*(str + i) != '\0')
	{
		if (!is_char_print(*(str + i)))
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
