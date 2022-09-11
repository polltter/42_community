#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int size = 9;
	int	i;

	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}