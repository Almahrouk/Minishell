/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemoryaddress.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:25:30 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/10/13 12:25:32 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hexa(unsigned long n)
{
	int		counter;
	char	*h;
	char	temp[16];
	int		i;

	i = 0;
	h = "0123456789abcdef";
	if (n == 0)
		return (write(1, &h[0], 1));
	counter = 0;
	while (n != 0)
	{
		temp[i] = h[n % 16];
		n /= 16;
		counter++;
		i++;
	}
	while (i--)
		write(1, &temp[i], 1);
	return (counter);
}

int	ft_putmemoryaddress(void *p)

{
	int	i;

	if (p == NULL)
	{
		return (ft_putstr("(nil)"));
	}
	else
	{
		write(1, "0x", 2);
		i = ft_hexa((unsigned long)p);
	}
	return (2 + i);
}
