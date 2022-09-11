/* 
Ok, so here we have to follow the same logic as in ft_swap
but in the whloe str, so that why we use while.
i < size / 2 is because we we can index the symetric
position to the ith position and swap them. For example:
if tab = {1,2,3,4,5}, the frist while cycle will be:
temp = tab[0] (and tab[0] = 1, so temp = 1)
tab[0] = tab[4] (size = 5, i = 0, 1 = 1, 5 - 0 - 1 = 4) (and tab[4] is the last position witch is 5)
tab[4] = temp (so tab[4] = 1)

At the end of the first while cylce the tab will be {5, 2, 3, 4, 1}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
