/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:00:02 by gfrancis          #+#    #+#             */
/*   Updated: 2023/09/01 14:35:46 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	typeargs(va_list args, char str)
{
	if (str == 'c')
		return (ft_putchar_print(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr_print(va_arg(args, char *)));
	else if (str == 'd')
		return (ft_putnbr_print(va_arg(args, int)));
	else if (str == 'i')
		return (ft_putnbr_print(va_arg(args, int)));
	else if (str == 'u')
		return (ft_putunnbr_print(va_arg(args, unsigned int)));
	else if (str == 'x')
		return (ft_putnbr_hx_print(va_arg(args, unsigned int), 0));
	else if (str == 'X')
		return (ft_putnbr_hx_print(va_arg(args, unsigned int), 1));
	else if (str == '%')
		return (ft_putchar_print('%'));
	else if (str == 'p')
		return (ft_putptr_print(va_arg(args, unsigned long)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	long long	i;

	va_start(args, str);
	i = 0;
	if (str == 0)
		return (0);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			i += typeargs(args, *str);
		}
		else
			i += ft_putchar_print(*str);
		str++;
	}
	va_end(args);
	return (i);
}
