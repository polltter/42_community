#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	int	i;

	i = -2;
	while (++i < 5000)
		if (ft_is_prime(i))
			printf("%d is a prime number\n", i);
	return (0);
}