/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:08:22 by arkara            #+#    #+#             */
/*   Updated: 2022/08/01 18:26:07 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
int	main()
{
	char str[100] = "absd abd aad asd abc asd asd asw";
	char find[100] = "abc";
	printf("%s", ft_strstr(str, find));
}
