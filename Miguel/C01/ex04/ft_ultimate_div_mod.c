void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;
	
	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}