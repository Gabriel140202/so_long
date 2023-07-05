/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:15:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 10:21:43 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*string;

	len = ft_strlen(s1);
	start = 0;
	end = len - 1;
	if (!set)
		return (NULL);
	while (start < len && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	if (!len || start > end || !s1)
	{
		string = malloc(1 * sizeof(char));
		string[0] = '\0';
		return (string);
	}
	string = malloc(((end - start + 2) * sizeof(char)));
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, (char *)&s1[start], end - start + 2);
	return (string);
}	
