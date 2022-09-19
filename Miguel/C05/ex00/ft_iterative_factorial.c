int	 ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	fact = nb;
	while (--nb > 0)
		fact *= nb;
	return (fact);
}