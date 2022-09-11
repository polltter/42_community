#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "asdfasdf";
	char	*str3 = "SADFLSDFGMS";
	char	str4[4];
	char	a = 0;
	char	b = 1;

	str4[0] = a;
	str4[1] = b;

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
	printf("%d\n", a);

	return (0);
}
