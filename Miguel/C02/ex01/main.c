#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src = "oi";
	char	dest[10] = "banana";
	char	dest_real[10];
	unsigned int	n;

	n = 2;
	ft_strncpy(dest, src, n);
	strncpy(dest_real, src, n);
	printf ("%s\n", dest);
	printf ("%s\n", dest_real);
	return (0);
}