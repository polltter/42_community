/* https://stackoverflow.com/questions/3862842/difference-between-char-str-string-and-char-str-string */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "HeLlO wOrLd!12341234";

	ft_strupcase(str);
	printf ("%s\n", str);
	return (0);
}