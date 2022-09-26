int	ft_maplength(char *str)
{
	int 	i;
	int 	f;
	char	c;

	f = open(str, 0);
	i = 0;
	read(f, &c, 1);
	while (c != '\n')
		read(f, &c, 1);
	read(f, &c, 1);
	while (c != '\n')
	{
		read(f, &c, 1);
		i++;
	}
	close(f);
	return (i);
}
