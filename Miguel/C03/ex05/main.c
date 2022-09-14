#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	real_dest[120] = "Hello";
	char	dest[120] = "Hello";
	char	*src = "world";

	printf("size is: %lu and dest is: %s\n", strlcat(real_dest, src, 7), real_dest);
	printf("size is: %u and dest is: %s\n", ft_strlcat(dest, src, 7), dest);
	return (0);
}