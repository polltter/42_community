#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int div;
	int mod;
	int *a;
	int *b;

	div = 14;
	mod = 10;
	a = &div;
	b = &mod;
	ft_ultimate_div_mod(a, b);
	printf("The division is: %d, and the mod is: %d\n", div, mod);
	return(0);
}