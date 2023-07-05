/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:00:29 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 15:06:11 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_putunlong_nbr_hx_print(unsigned long nbr)
{
	int		i;
	char	hexadecimal[16];

	i = 0;
	ft_strcpy(hexadecimal, "0123456789abcdef");
	if (nbr >= 16)
		i += ft_putunlong_nbr_hx_print(nbr / 16);
	i += ft_putchar_print(hexadecimal[nbr % 16]);
	return (i);
}

int	ft_putptr_print(unsigned long nbr)
{
	int		i;

	i = 0;
	if (nbr == 0)
	{
		i = write(1, "(nil)", 5);
		return (i);
	}
	return (ft_putstr_print("0x") + ft_putunlong_nbr_hx_print(nbr));
}
