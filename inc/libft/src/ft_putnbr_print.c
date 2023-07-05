/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:58:38 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 15:05:24 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_putnbr_print(int nbr)
{
	int	i;

	i = 0;
	if (nbr == INT_MIN)
		i += write(1, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			i += ft_putchar_print('-');
			nbr *= -1;
		}
		if (nbr >= 10)
			i += ft_putnbr_print(nbr / 10);
		i += ft_putchar_print((nbr % 10) + '0');
	}
	return (i);
}
