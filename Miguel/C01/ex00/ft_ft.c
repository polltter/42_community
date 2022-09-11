#include <unistd.h>

/*
the pointer stores a address.
When you use the * before the pointer it derreferences it, meaning you are
changing whatever is inside the memory pointed to by the pointer (nbr in this case)
*/

void	ft_ft(int *nbr)
{
	*nbr = 42; 
}
