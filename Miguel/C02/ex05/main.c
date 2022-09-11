#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "asdfasdf";
	char	*str3 = "SADFLSDFGMS";
	char	*str4 = "231421346\'";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
	return (0);
}