/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hx_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:59:54 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 15:04:55 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_putnbr_hx_print(unsigned int nbr, int caps)
{
	int		i;
	char	hexadecimal[16];

	i = 0;
	if (caps == 0)
		ft_strcpy(hexadecimal, "0123456789abcdef");
	else
		ft_strcpy(hexadecimal, "0123456789ABCDEF");
	if (nbr >= 16)
		i += ft_putnbr_hx_print(nbr / 16, caps);
	i += ft_putchar_print(hexadecimal[nbr % 16]);
	return (i);
}
