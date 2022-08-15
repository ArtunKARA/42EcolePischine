#include <stdio.h>
int ft_str_is_numeric(char *str);
int main() 
{
    printf("%d-", ft_str_is_numeric("abcd"));
	printf("%d-", ft_str_is_numeric("1091"));
	printf("%d-", ft_str_is_numeric("a21223ab")); 
	printf("%d", ft_str_is_numeric("")); 
}
