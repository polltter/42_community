int ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power > 0)
		res *= ft_recursive_power(nb, power - 1);
	return (res);
}