/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:57:31 by arkara            #+#    #+#             */
/*   Updated: 2022/08/04 15:24:22 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_basecount(char *base)
{
	int	c;

	c = 0;
	while (base[c])
		c++;
	return (c);
}

int	ft_control(char	*base)
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

int	ft_plsmns(char *str, int *pls)
{
	int	c;
	int	mc;

	mc = 0;
	c = 0;
	while ((str[c] <= 13 && str[c] >= 9) || str[c] == 32)
		c++;
	while (str[c] == 43 || str[c] == 45)
	{
		if (str[c] == 45)
			mc++;
		c++;
	}
	if (mc % 2 == 0)
		*pls = 1;
	else
		*pls = -1;
	return (c);
}

int	ft_nbrdecoder(char *str, char *base, int c, int basec)
{
	int	i;
	int	nb;
	int	s;

	nb = 0;
	while (str[c])
	{
		i = 0;
		s = -1;
		while (base[i])
		{
			if (str[c] == base[i])
				s = i;
			i++;
		}
		if (s < 0)
			return (nb);
		nb *= basec;
		nb += s;
		c++;
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	basec;
	int	pls;
	int	nbr;
	int	c;

	if (ft_control(base) == 0)
		return (0);
	basec = ft_basecount(base);
	c = ft_plsmns(str, &pls);
	nbr = ft_nbrdecoder(str, base, c, basec);
	return (pls * nbr);
}
