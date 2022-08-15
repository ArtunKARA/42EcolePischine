/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:46:11 by arkara            #+#    #+#             */
/*   Updated: 2022/08/04 10:54:46 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	ft_basecount(char *base)
{
	int	c;

	c = 0;
	while (base[c])
		c++;
	return (c);
}

int	ft_control(char *base)
{
	int	c;
	int	i;

	c = 0;
	if (base == 0 || ft_basecount(base) <= 1)
		return (0);
	while (base[c])
	{
		if (base[c] == '+' || base[c] == '-')
			return (0);
		c++;
	}
	c = 0;
	while (base[c])
	{
		i = c + 1;
		while (base[i])
		{
			if (base[i] == base[c])
				return (0);
			i++;
		}
		c++;
	}
	return (1);
}

void	ft_printandconvert(unsigned int nbr, char *base, int basec)
{
	int	c;

	c = 0;
	if (nbr > 9)
	{
		ft_printandconvert(nbr / 10, base, basec);
	}
	ft_write(base[nbr % basec]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				basec;
	unsigned int	nbr1;

	if (ft_control(base) == 1)
	{
		basec = ft_basecount(base);
		if (nbr < 0)
		{
			ft_write('-');
			nbr1 = nbr * -1;
		}
		else
			nbr1 = nbr;
		ft_printandconvert(nbr1, base, basec);
	}
}
