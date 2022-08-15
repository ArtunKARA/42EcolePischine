#include <stdio.h>
void ft_swap(int *a, int *b);
int main() {
    int a = 1;
    int b = 2;
    int *a1 = &a;
    int *b1 = &b;
    ft_swap(a1,b1);
    printf("%d",a);
    printf("%d",b);
    return 0;
}
