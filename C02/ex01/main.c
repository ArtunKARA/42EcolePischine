#include <stdio.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char src[] = "abcdf";
	char dest[] = "";
	printf("%s", ft_strncpy(dest, src,3));
}
