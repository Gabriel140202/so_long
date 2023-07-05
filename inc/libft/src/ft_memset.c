/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:34:38 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 10:20:41 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{	
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (n--)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}
