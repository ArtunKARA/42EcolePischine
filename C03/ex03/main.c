/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:24:05 by arkara            #+#    #+#             */
/*   Updated: 2022/08/01 16:36:33 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char src[] = "hello";
	char dest[] = "mars ";
	printf("%s", ft_strncat(dest, src, 3));
}
