/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:24:58 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/10/13 12:25:08 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hex(unsigned long number, char c)
{
	int		counter;
	char	*h;
	char	temp[8];
	int		i;

	i = 0;
	if (c == 'x')
		h = "0123456789abcdef";
	else
		h = "0123456789ABCDEF";
	if (number == 0)
		return (write(1, &h[0], 1));
	counter = 0;
	while (number != 0)
	{
		temp[i] = h[number % 16];
		number /= 16;
		counter++;
		i++;
	}
	while (i--)
		write(1, &temp[i], 1);
	return (counter);
}
