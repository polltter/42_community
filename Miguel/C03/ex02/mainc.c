#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	*src = "world";
	//char	dest[8] = "Hello ";
	char	real_dest[8] = "Hello ";

	//printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(real_dest, src));
	return (0);
}
