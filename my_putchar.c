/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killian <killian@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:28:25 by killian           #+#    #+#             */
/*   Updated: 2024/10/30 09:29:35 by killian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)

{
	write(1, &c, 1);
}

int	main(void)
{
	char	c;

	c = 'A';
	my_putchar(c);
}
