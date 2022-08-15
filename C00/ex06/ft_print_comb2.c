/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:45:41 by arkara            #+#    #+#             */
/*   Updated: 2022/07/24 17:58:08 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_prntnmber(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '0' + a / 10;
	a2 = '0' + a % 10;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, &" ", 1);
	b1 = '0' + b / 10;
	b2 = '0' + b % 10;
	write(1, &b1, 1);
	write(1, &b2, 1);
	write(1, &", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{
				write(1, &"98 99", 5);
			}
			else
			{
				ft_prntnmber(a, b);
			}
			b++;
		}
		a++;
	}
}
