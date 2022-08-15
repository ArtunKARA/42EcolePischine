/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:45:38 by arkara            #+#    #+#             */
/*   Updated: 2022/08/08 15:48:54 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strdup(char *src)
{
	int		c;
	int		sizea;
	char	*dest;

	c = 0;
	sizea = ft_str_length(src);
	dest = (char *) malloc(sizea * sizeof(char) + 1);
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
