int	find_min(int *tab, int size, int i);
void	ft_swap(int *tab, int index, int i);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int index;

	i = 0;
	while (i < size)
	{
		index = find_min(tab, size, i);
		ft_swap(tab, index, i);
		i++;
	}
}

int	find_min(int *tab, int size, int i)
{
	int	min;
	int	index;

	index = 0;
	min = 2147483647;
	while (i < size)
	{
		if (tab[i] < min)
		{
			min = tab[i];
			index = i;
		}
		i++;	
	}
	return (index);
}

void	ft_swap(int *tab, int index, int i)
{
	int temp;

	temp = tab[index];
	tab[index] = tab[i];
	tab[i] = temp;
}
