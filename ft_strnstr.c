/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:24:10 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 18:36:33 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;
	char	*hay;
	size_t	j;

	i = 0;
	needle_len = ft_strlen(needle);
	hay = (char *)haystack;
	if (needle_len == 0)
		return (hay);
	while (i < len && hay[i])
	{
		j = 0;
		while ((hay[i + j] != '\0') && (needle[j] != '\0')
			&& (hay[i + j] == needle[j]) && (i + j < len))
			j++;
		if (j == needle_len)
			return (hay + i);
		i++;
	}
	return (0);
}
