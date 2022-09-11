#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	c;
	int	d;
	int	*a;
	int	*b;

	c = 10;
	d = 54;
	a = &c;
	b = &d;
	ft_swap(a, b);
	printf("c is now: %d, and d is now: %d\n", c, d);
	return (0);
}