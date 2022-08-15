/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkara <arkara@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:50:31 by arkara            #+#    #+#             */
/*   Updated: 2022/08/02 11:01:06 by arkara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*m;
	char	p;
	int		i;
	unsigned char	*str2;

	m = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			str2 = (unsigned	char*) str;
			write(1, "\\", 1);
			p = m[str2[i] / 16];
			write(1, &p, 1);
			p = m[str2[i] % 16];
			write(1, &p, 1);
		}
		i++;
	}
}