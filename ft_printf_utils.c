/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 08:23:58 by shurtado          #+#    #+#             */
/*   Updated: 2024/08/09 08:55:34 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	return (write(1, &c, 1));
}
int ft_putstr(const char *str)
{
	int	i;

	if (!str)
		return(ft_putstr("(null)"));
	i = 0;
	while (str[i])
		i++;
	return (write(1, str, i));
}
