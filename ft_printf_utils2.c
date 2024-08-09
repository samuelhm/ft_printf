/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:25:05 by shurtado          #+#    #+#             */
/*   Updated: 2024/08/09 09:33:52 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthxnbr(unsigned int nb, int upper)
{
	char	*hx;

	if (upper)
		hx = "0123456789abcdef";
	else
		hx = "0123456789ABCDEF";
	if (nb > 15)
		return (ft_puthxnbr(nb / 16));
	else
		return (ft_putchar(hx[nb % 16]));
}

int ft_putptr(unsigned long nb)
{
	char	*hx;

	hx = "0123456789abcdef";
	if (!nb)
		return(write(1, '0', 1));
	if (nb > 15)
	{
		return (ft_putptr(nb / 16));
	}
	else
	{
		return (ft_putchar(hx[nb % 16]));
	}
}