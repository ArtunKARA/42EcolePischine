/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:18:38 by arkara            #+#    #+#             */
/*   Updated: 2022/08/04 20:32:19 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (result);
}
