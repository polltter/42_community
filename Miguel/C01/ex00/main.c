#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*nbr;

	a = 0;
	nbr = &a; 
	ft_ft(nbr);
	printf("%d\n", a);
	return (0);
}
