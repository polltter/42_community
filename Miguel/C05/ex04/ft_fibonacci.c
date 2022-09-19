int ft_fibonacci(int index)
{
	int	fib;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fib);
}