#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
	int	i;

	i = -2;
	while (++i < 50)
		printf("%d\n", ft_fibonacci(i));
	return (0);
}