/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killian <killian@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:00:39 by killian           #+#    #+#             */
/*   Updated: 2024/10/30 11:19:50 by killian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		my_putchar(str[i]);
		i++;
	}
}
int	main(void)

{
	char *str = "Bon courage";
	my_putstr(str);
	return (0);
}
