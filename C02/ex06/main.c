#include <stdio.h>
int ft_str_is_printable(char *str);
int main(void)
{
    printf("%d-", ft_str_is_printable("ab cd"));
	printf("%d-", ft_str_is_printable("1091"));
	printf("%d-", ft_str_is_printable("\n"));
	printf("%d", ft_str_is_printable(""));
}
