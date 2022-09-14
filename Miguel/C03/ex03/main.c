#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src = "world";
	char	dest[15] = "Hello ";
	char	real_dest[15] = "Hello ";

	printf("%s\n", ft_strncat(dest, src, 4));
	printf("%s\n", strncat(real_dest, src, 4));
	return (0);
}
