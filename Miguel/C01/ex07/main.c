#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 9;
	int	i;

	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}
	printf("\n");
}
