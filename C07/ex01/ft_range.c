/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:52:16 by arkara            #+#    #+#             */
/*   Updated: 2022/08/09 15:33:29 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*matrix;
	int	c;

	if (min >= max)
		return (0);
	size = max - min;
	matrix = (int *) malloc(size * sizeof(int));
	if (!matrix)
		return (0);
	c = 0;
	while (c < size)
	{
		matrix[c] = min + c;
		c++;
	}
	return (matrix);
}
