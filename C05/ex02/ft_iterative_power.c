/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:46:27 by arkara            #+#    #+#             */
/*   Updated: 2022/08/04 17:00:29 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	rs;

	rs = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		rs *= nb;
		power--;
	}
	return (rs);
}
