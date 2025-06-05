/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:25:50 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/10/13 12:25:52 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrunsigned(unsigned int n)
{
	char	a[10];
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		a[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	x = i;
	while (i--)
		write(1, &a[i], 1);
	return (x);
}
/*
int	count;

	count = 0;
	if (n > 9)
		count += ft_putnbrunsigned(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
*/
