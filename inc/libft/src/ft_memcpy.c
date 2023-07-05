/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:37:32 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 10:20:34 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int			i;
	unsigned char			*buffer1;
	unsigned char			*buffer2;

	i = n;
	buffer1 = (unsigned char *) src;
	buffer2 = (unsigned char *) dest;
	while (i > 0 && (src || dest))
	{
		i--;
		*(buffer2 + i) = *(buffer1 + i);
	}
	return (dest);
}
