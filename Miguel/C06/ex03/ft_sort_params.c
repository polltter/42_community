#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_write(int argc, char **argv);

int	main(int argc, char **argv)
{
	char	*min;
	int		i;
	int		j;

	
	i = 0;
	while (++i < argc)
	{
		min = argv[i];
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(min, argv[j]) > 0)
			{
				argv[i] = argv[j];
				argv[j] = min;
				min = argv[i];
			}
		}
	}
	ft_write(argc, argv);
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

void	ft_write(int argc, char **argv)
{
	int	i;
	int	letra;

	i = 0;
	while (++i < argc)
	{
		letra = -1;
		while (argv[i][++letra] != '\0')
			write (1, &argv[i][letra], 1);
		write (1, "\n", 1);
	}
}