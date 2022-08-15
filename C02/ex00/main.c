char *ft_strcpy(char *dest, char *src);
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac ==2)
	{
		int i = 0;
		char b[4];
		ft_strcpy(b, &av[1][0]);

		while (i<4)
		{
			printf("%c",b[i]);
			i++;
		}
	}
	
}
