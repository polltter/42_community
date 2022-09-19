#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	int	i;

	i = -2;
	while (++i < 5000)
		printf("%d\n", ft_sqrt(i));
	return (0);
}