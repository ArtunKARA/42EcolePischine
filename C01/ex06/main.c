#include <unistd.h>
int ft_strlen(char *str);

int main(void)
{
	int a;

	a = ft_strlen("abcd");
	char b = '0' + a;
	write(1,&b,1);
}
