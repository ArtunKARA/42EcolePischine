/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:32:03 by arkara            #+#    #+#             */
/*   Updated: 2022/08/04 16:45:25 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	rs;

	rs = 1;
	while (nb > 0)
	{
		rs *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (rs);
}
