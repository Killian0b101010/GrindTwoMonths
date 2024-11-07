/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killian <killian@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:51:27 by killian           #+#    #+#             */
/*   Updated: 2024/11/07 00:58:04 by killian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*my_strcat(char *dest, const char *src)
{
	int	i;
	int	s;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[50] = "Hello";
	char	*src;

	src = "world";
	my_strcat(dest, src);
	write(1, dest, 50);
	write(1, "\n", 1);
	return (0);
}
