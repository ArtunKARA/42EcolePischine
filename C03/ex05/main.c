/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:08:42 by arkara            #+#    #+#             */
/*   Updated: 2022/08/02 13:56:36 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int main (void)
{
	char src[] = "1234";
   	char dest [] = "ABCD";
    printf("%i \n", ft_strlcat(dest, src, 7));
    printf("%s \n", dest);
}
