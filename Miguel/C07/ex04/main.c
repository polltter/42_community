#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	char nbr[] = "-a";
	char base_to[] = "0123456789";
	char base_from[] = "a123456";
	char *res;

	res = ft_convert_base(nbr, base_from, base_to);
	if (res == NULL)
		printf("1");
	printf("%s\n", res);
	free(res);
	return (0);
}
