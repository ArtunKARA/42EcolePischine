#include <stdio.h>
void ft_putstr_non_printable(char *str);
int    main()
{
    char str[21] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
