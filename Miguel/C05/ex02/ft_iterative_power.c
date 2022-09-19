int ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	while (--power > 0)
		res *= nb;
	return (res);
}
