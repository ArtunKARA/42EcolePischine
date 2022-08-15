/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:33:33 by arkara            #+#    #+#             */
/*   Updated: 2022/08/09 18:01:07 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[3];
	char	*pr;
	int		c;

	c = 0;
	text[0] = "AaA";
	text[1] = "BbB";
	text[2] = "CcC";
	pr = ft_strjoin(3, text, " - ");
	while (pr[c])
	{
		printf("%c", pr[c]);
		c++;
	}
}
