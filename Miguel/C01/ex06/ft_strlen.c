/*
Same logic as the previous exercise. The '\0' is a null charracter
present in everything. Basically means: string is over. 
*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	return (len);
}
