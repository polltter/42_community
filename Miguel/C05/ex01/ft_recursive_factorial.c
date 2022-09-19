int ft_recursive_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	fact *= ft_recursive_factorial(fact - 1);
	return (fact);
}