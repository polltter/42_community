#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*a = "hello";
	char	*b = "heila";

	printf("%d\n", ft_strncmp(a, b, 3));
	printf("%d\n", strncmp(a, b, 3));
	return (0);
}