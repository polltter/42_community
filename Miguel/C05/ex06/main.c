#include <stdio.h>
#include <limits.h>

int ft_is_prime(int nb);

int main(void)
{
	int	i;

	i = 0;
	if (ft_is_prime(2147483647))
		printf("%d is a prime number\n", 2147483647);
	return (0);
}
