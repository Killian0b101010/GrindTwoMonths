/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killian <killian@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:19:49 by killian           #+#    #+#             */
/*   Updated: 2024/10/30 18:20:00 by killian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putnbr(int n)
{
	if (n >= 10)
	{
		my_putnbr(n / 10);
	}
	my_putchar((n % 10) + '0');
}

void	print_array(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		my_putnbr(array[i]);
		if (i < size - 1)
		{
			my_putchar('.');
		}
		i++;
	}
}
int	main(void)
{
	int	array[] = {2, 4, 6, 8, 10};
	int	size;

	size = 5;
	print_array(array, size);
	my_putchar('\n');
	return (0);
}
