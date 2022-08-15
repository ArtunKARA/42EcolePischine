#include <stdio.h>
void ft_rev_int_tab(int *tab, int size);
int main(void)
{
	int s = 0;	
	int a[4] = {1,2,3,4};
	ft_rev_int_tab(a,4);
		while (s<4)
	{
		printf("%d",a[s]);
		s++;
	}
}
