/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:00:51 by arkara            #+#    #+#             */
/*   Updated: 2022/08/05 13:36:24 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	if (ac > 1)
	{
		while (x < ac)
		{
			y = 0;
			while (av[x][y])
			{
				write(1, &av[x][y], 1);
				y++;
			}
			write(1, "\n", 1);
			x++;
		}
	}
}
