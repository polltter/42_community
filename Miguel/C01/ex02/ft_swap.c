/*
So we need to create a temp variable in order to store whatever is
inside a the address pointed by b. Then, inside of the address stored by b, 
store whats inside of the addresses pointed to by a. Finally, we can change
the value pointed to by a to the value stored in temp. 
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
