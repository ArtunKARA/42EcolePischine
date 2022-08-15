/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:10:56 by arkara            #+#    #+#             */
/*   Updated: 2022/08/09 19:05:20 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*mem;
	int		c;
	int		i;
	int		x;

	i = 0;
	c = 0;
	x = 0;
	mem = (char *)malloc(sizeof(strs));
	while (c < size)
	{
		i = 0;
		while (strs[c][i])
		{
			mem[x++] = strs[c][i++];
		}
		i = 0;
		while (sep[i] && c < size - 1)
		{
			mem[x++] = sep[i++];
		}
		c++;
	}
	mem[x] = '\0';
	return (mem);
}
