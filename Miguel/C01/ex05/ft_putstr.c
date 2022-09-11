#include <unistd.h>
/*
len is the number of bytes in the string. Fristly we have to determine the 
length of the string so that we can know the number of bytes to put in the function "write".
After that we can just put 'str' in the middle spot (it doenst need and '&' because str is 
already an address), in the last spot of write, we put "len" because the length of the string
is the number of bytes we want to print. 
*/
void ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	write(1, str, len);
}
