/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:17:58 by arkara            #+#    #+#             */
/*   Updated: 2022/08/02 17:31:04 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_spaces(char *str)
{
	int	c;

	c = 0;
	while ((str[c] <= 13 && str[c] >= 9) || str[c] == 32)
		c++;
	return (c);
}

int	ft_plsmns(char *str)
{
	int	i;
	int	pnc;
	int	cm;

	i = ft_spaces(str);
	pnc = 0;
	cm = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			pnc++;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		cm = cm * 10;
		cm += str[i] - '0';
		i++;
	}
	if (pnc % 2 == 0)
		return (1 * cm);
	else
		return (-1 * cm);
}

int	ft_atoi(char *str)
{
	int	s;

	s = ft_plsmns(str);
	return (s);
}
