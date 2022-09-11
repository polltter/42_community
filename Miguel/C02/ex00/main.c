#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[1];
	char	dest_real[1];
	char	*src = "Hello";
	ft_strcpy (dest, src);
	//strcpy (dest_real, src);
	printf ("%s\n", dest);
	//printf ("%s\n", dest_real);
	return (0);
}