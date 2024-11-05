/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killian <killian@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:47:30 by killian           #+#    #+#             */
/*   Updated: 2024/11/06 00:11:49 by killian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)

{
	int i = 0;
	while (str[i] != '\0')
	{
		my_putchar(str[i]);
		i++;
	}
}

char	*my_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[25];

	src = "Hello World";
	my_strcpy(dest, src);
	my_putstr(dest);
	my_putchar('\n');
	my_putstr(src);
	return (0);
}
