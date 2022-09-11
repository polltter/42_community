#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str = "123125";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}