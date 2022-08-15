/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:21:12 by arkara            #+#    #+#             */
/*   Updated: 2022/08/02 13:58:27 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *a)
{
	unsigned int	c;

	c = 0;
	while (a[c])
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	sl;
	unsigned int	dl;

	sl = ft_strlen(src);
	dl = ft_strlen(dest);
	i = 0;
	c = 0;
	while (dest[i])
		i++;
	if (size > i)
	{
		while (src[c] && i < size - 1)
		{
			dest[i] = src[c];
			c++;
			i++;
		}
		dest[i] = '\0';
		return (dl + sl);
	}
	else
		return (sl + size);
}
