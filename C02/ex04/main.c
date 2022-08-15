#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main() 
{
    printf("%d-", ft_str_is_lowercase("abcd"));
	printf("%d-", ft_str_is_lowercase("1091"));
	printf("%d-", ft_str_is_lowercase("Abcd")); 
	printf("%d", ft_str_is_lowercase("")); 
}
