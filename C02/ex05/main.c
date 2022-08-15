#include <stdio.h>
int ft_str_is_uppercase(char *str);

int main()
{
    printf("%d-", ft_str_is_uppercase("abcd"));
	printf("%d-", ft_str_is_uppercase("1091"));
	printf("%d-", ft_str_is_uppercase("ACB"));
	printf("%d", ft_str_is_uppercase(""));
}
