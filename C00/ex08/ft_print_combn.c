/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:58:55 by arkara            #+#    #+#             */
/*   Updated: 2022/07/26 11:20:42 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(int nb[], int n)
{
	int	i;
	char	p;

	i = 0;
	while (i <= n-1)
	{
		p = nb[i]+'0';
		write(1, &p, 1);
		i++; 
	}
	if (nb[0] != (10 - n + 1))
	{
		write(1, &", ", 2);
	}

}
void	ft_wrt(int n ,int  nb[],int s)
{
	int k;

	k = n-1;
	if (nb[n-1] == 9)
	{
		write(1, "b",1);
			while ((nb[k] == 10 - n + k) && (nb[k-1] != 9 - k + n))
			{
				write(1, "a",1);
				nb[k] = nb[k-1]+1;
				k--;
			}
	}
	else
	{
		nb[s]++;
	}
	if (s == n-1)
	{
		ft_print(nb, n);
	}
	if((nb[0] != 10-n) &&  (nb[9-n] != 9))
	{
		ft_wrt(n, nb, s);
	}
}
void	ft_print_combn(int n)
{
	int	nb[9];
	int	s;

	s = 0;
	while (s < n)
	{
		nb[s] = s;
		s++;
	}
	ft_print(nb,n);

	ft_wrt(n, nb, n-1);
}
