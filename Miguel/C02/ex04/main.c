#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "asdfasdf";
	char	*str3 = "SADFLSDFGÇMS";
	char	*str4 = "231421346\'";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
	return (0);
}