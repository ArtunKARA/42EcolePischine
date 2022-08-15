#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
 int    main()
{
    char src[] = "World!";
    char dest[99];
    printf("%d | %s", ft_strlcpy(dest, src ,0), dest);
}

