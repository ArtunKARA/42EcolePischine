#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int a[4] = {1,2,3,4};
	int s;

	s = 0;
	ft_sort_int_tab(a,4);
	while (s<4)
	{
		printf("%d",a[s]);
		s++;
	}
}
