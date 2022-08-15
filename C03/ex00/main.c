#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);
int	main()
{
	printf("%d", ft_strcmp("abcd", "abcd"));
	printf("\n%d", ft_strcmp("abcd", "abc"));
	printf("\n%d", ft_strcmp("abc", "abcd"));
	printf("\n%d", ft_strcmp("abcd", "abcd1"));
}
