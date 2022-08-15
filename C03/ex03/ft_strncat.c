/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:08:02 by arkara            #+#    #+#             */
/*   Updated: 2022/08/01 16:27:19 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = 0;
	if (nb != 0)
	{
		while (dest[i])
		{
			i++;
		}
		while (src[c] && c < nb)
		{
			dest[i] = src[c];
			i++;
			c++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
