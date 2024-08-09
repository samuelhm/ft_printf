/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:13:29 by shurtado          #+#    #+#             */
/*   Updated: 2024/08/09 08:21:30 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(char const *, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int ft_puthxnbr(unsigned int nb,int upper);
int ft_putptr(unsigned long nb);

#endif

