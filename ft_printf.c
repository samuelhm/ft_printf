/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:13:51 by shurtado          #+#    #+#             */
/*   Updated: 2024/08/09 08:17:24 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printarg(char carg, va_list args);

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	args;
	int		result;

	va_start(args, str);
	i = 0;
	result = 0;

	while (str[i])
	{
		if (str[i] == '%')
		{
			result += printarg(str[i], args);
		}
		else
		{
			if(!write(1, &str[i], 1))
			{
				va_end(args);
				return (-1);
			}
			result++;
		}
		i++;
	}
	va_end(args);
	return (result);
}
