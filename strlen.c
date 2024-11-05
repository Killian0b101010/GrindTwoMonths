/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killian <killian@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:35:31 by killian           #+#    #+#             */
/*   Updated: 2024/11/05 16:40:31 by killian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
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

void	put_nbr(int count)
{
	if (count < 0)
	{
		write(1, "Error number negatif", 21);
		return ;
	}
	if (count >= 10)
	{
		put_nbr(count / 10);
	}
	my_putchar((count % 10) + '0');
}

void	view_char(char *str)
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
	char	*str;
	int		count;

	str = "Hello";
	count = my_strlen(str);
	my_strlen(str);
	put_nbr(count);
	my_putchar('\n');
	view_char(str);
	return (0);
}
