#include <unistd.h>

int	main(int argc, char **argv)
{
	int	letra;
	int	argumento;

	argumento = argc;
	while (--argumento > 0)
	{
		letra = -1;
		while (argv[argumento][++letra] != '\0')
			write(1, &argv[argumento][letra], 1);
		write (1, "\n", 1);
	}
	
}
