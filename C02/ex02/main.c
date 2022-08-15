#include <stdio.h>
int	ft_str_is_alpha(char *str);
int main()
{
    printf("%d-", ft_str_is_alpha("abcd"));
	printf("%d-", ft_str_is_alpha("abc1"));
	printf("%d-", ft_str_is_alpha("abc*cab"));
	printf("%d", ft_str_is_alpha(""));
}
