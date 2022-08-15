#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(2147483647, "0123456789");
}
