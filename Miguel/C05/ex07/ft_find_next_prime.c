int ft_is_prime(int nb);

int ft_find_next_prime(int nb)
{

	if (!ft_is_prime(nb))
		while (!ft_is_prime(nb))
			nb++;
	return (nb);
}


int ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1 || nb == -1)
		return (0);
	while (++i <= nb / 2)
		if (nb % i == 0)
			return (0);
	return (1);
}