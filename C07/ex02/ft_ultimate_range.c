/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:51:22 by arkara            #+#    #+#             */
/*   Updated: 2022/08/09 16:09:29 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*mem;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	mem = (int *) malloc(size * sizeof(int));
	if (!mem)
	{
		*range = 0;
		return (-1);
	}
	*range = mem;
	i = 0;
	while (i < size)
	{
		mem[i] = min + i;
		i++;
	}
	return (size);
}
