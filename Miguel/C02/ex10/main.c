#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src = "Hello";
	char	dest[6];
	char	real_dest[6];
	
	printf("The return value is: %u and the string created is: %s\n", ft_strlcpy(dest, src, 0), dest);
	printf("The return value is: %lu and the string created is: %s\n", strlcpy(real_dest, src, 0), real_dest);
	return (0);
}