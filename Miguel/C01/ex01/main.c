#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void){
    int n = 0;
    int *nbr = &n;
    int **nnbr = &nbr;
    int ***nnnbr = &nnbr;
    int ****nnnnbr = &nnnbr;
    int *****nnnnnbr = &nnnnbr;
    int ******nnnnnnbr = &nnnnnbr;
    int *******nnnnnnnbr = &nnnnnnbr;
    int ********nnnnnnnnbr = &nnnnnnnbr;
    int *********nnnnnnnnnbr = &nnnnnnnnbr;
    ft_ultimate_ft(nnnnnnnnnbr);
    printf("%d", n);
    return 0;
}