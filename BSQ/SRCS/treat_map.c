#include "bsq.h"

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = -1;
	res = 0;
	while (str[++i])
		res = res * 10 + (str[i] - 48);
	return (res);
}

t_file	len_of_line(t_file mapf, char *str)
{
	int	c;

	mapf.l = 1;
	mapf.file = open(str, 0);
	read(mapf.file, &c, 1);
	while (c != '\n')
	{
		read(mapf.file, &c, 1);
		mapf.l++;
	}
	mapf.buf = (char *)malloc(sizeof(char) * mapf.l);
	close(mapf.file);
	return (mapf);
}

t_file	first_line_map(char *str)
{
	t_file	mapf;
	char	c;

	mapf = len_of_line(mapf, str);
	mapf.file = open(str, 0);
	mapf.l = 0;
	read(mapf.file, &c, 1);
	mapf.buf[mapf.l] = c;
	while (c != '\n')
	{
		read(mapf.file, &c, 1);
		mapf.buf[++mapf.l] = c;
	}
	mapf.buf[mapf.l] = '\0';
	mapf.full = mapf.buf[mapf.l - 1];
	mapf.obs = mapf.buf[mapf.l - 2];
	mapf.empty = mapf.buf[mapf.l - 3];
	mapf.buf[mapf.l - 3] = '\0';
	mapf.l = ft_atoi(mapf.buf);
	close(mapf.file);
}
