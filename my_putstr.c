/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killian <killian@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:00:39 by killian           #+#    #+#             */
/*   Updated: 2024/10/30 16:37:06 by killian          ###   ########.fr       */
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
	my_putchar('\n');
}

int	my_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	my_putnbr(int count)
{
	if (count >= 10)
	{
		my_putnbr(count / 10);
	}
	my_putchar((count % 10) + '0');
}

int	main(void)

{
	char *str = "Bon courage";
	my_putstr(str);
	int count = my_strlen(str);
	my_putnbr(count);
	return (0);
}
