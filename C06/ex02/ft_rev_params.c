/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:36:45 by arkara            #+#    #+#             */
/*   Updated: 2022/08/05 13:49:23 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;
	int	y;

	x = ac - 1;
	y = 0;
	if (ac > 1)
	{
		while (x > 0)
		{
			while (av[x][y])
			{
				write(1, &av[x][y], 1);
				y++;
			}
			write(1, "\n", 1);
			y = 0;
			x--;
		}
	}
}
