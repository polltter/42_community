#include <stdio.h>
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	int 	i = 0;
	while(i < 256)
	{
		str[6] = i;
		ft_putstr_non_printable(str);
		printf("\n");
		i++;
	}
		
	return (0);
}