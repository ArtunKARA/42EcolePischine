/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:46:49 by arkara            #+#    #+#             */
/*   Updated: 2022/08/10 09:14:49 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *c)
{
	int		i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = (char *) malloc(sizeof(char) * (arr[i].size + 1));
		arr[i].copy = (char *) malloc(sizeof(char) * (arr[i].size + 1));
		ft_strcpy(arr[i].str, av[i]);
		ft_strcpy(arr[i].copy, av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
