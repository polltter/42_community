#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src = "Hello";
	char	dest[10];
	char	dest_real[10];
	unsigned int	n;

	n = 8;
	ft_strncpy(dest, src, n);
	strncpy(dest_real, src, n);
	printf ("%s\n", dest);
	printf ("%c\n", dest_real);
	return (0);
}