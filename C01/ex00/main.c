#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr);
int main()
{
    int k;
    k = 55;
    int *pnbr = &k;
    printf("%d\n",k);
    ft_ft(pnbr);
    printf("%d",k);
}
