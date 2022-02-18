/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:22:56 by damartin          #+#    #+#             */
/*   Updated: 2022/02/07 15:49:58 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	c;

	c = ft_strlen(s1) + 1;
	ptr = (char *)malloc(sizeof(char) * c);
	c = 0;
	if (ptr == NULL)
		return (0);
	while (s1[c])
	{
		ptr[c] = s1[c];
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}
