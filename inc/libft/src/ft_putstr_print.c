/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:58:22 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 15:02:48 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_putstr_print(char *s)
{
	int	i;

	i = 0;
	if (s == 0)
	{
		i = write(1, "(null)", 6);
		return (i);
	}
	while (*s != '\0')
	{
		i += write(1, s, 1);
		s++;
	}
	return (i);
}
