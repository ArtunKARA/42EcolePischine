#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);
int main() {
    int a = 20;
    int b = 7;
    int div;
    int mod;
    int *m = &mod;
    int *d = &div;
    
    ft_div_mod(a,b,m,d);
    printf("%d", mod);
    printf("%d", div);
    return 0;
}
