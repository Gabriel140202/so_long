/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:58:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 10:19:57 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	else if (n == 0)
		return (1);
	while ((unsigned int)n > 0)
	{
		len++;
		n = (unsigned int)n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		numlen;

	numlen = ft_intlen(n);
	result = malloc((numlen + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	if (n == 0)
		result[0] = '0';
	result[numlen] = '\0';
	while (numlen > 0 && (unsigned int)n > 0)
	{
		result[numlen - 1] = ((unsigned int)n % 10) + 48;
		n = (unsigned int)n / 10;
		numlen--;
	}
	return (result);
}
