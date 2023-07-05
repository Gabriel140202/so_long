/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunnbr_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:59:22 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 15:05:52 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_putunnbr_print(unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr >= 10)
		i += ft_putunnbr_print(nbr / 10);
	i += ft_putchar_print((nbr % 10) + '0');
	return (i);
}
