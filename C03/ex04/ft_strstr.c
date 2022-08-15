/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:14:35 by arkara            #+#    #+#             */
/*   Updated: 2022/08/02 12:20:09 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	if (to_find[c] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
		{
			if (to_find[c + 1] == '\0')
			{
				return (&str[i]);
			}
			c++;
		}
		c = 0;
		i++;
	}
	return (0);
}
