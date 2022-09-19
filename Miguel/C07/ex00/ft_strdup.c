#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	i = -1;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(char) + (len + 1));
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
