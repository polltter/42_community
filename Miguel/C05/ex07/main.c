#include <stdio.h>

int	ft_find_next_prime(int nb);

int main(void)
{
	int	i;

	i = -2;
	while (++i < 50)
		printf("next prime is %d\n", ft_find_next_prime(i));
	return (0);
}