/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:39:30 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 19:15:00 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *) str;
	while (i < n)
	{
		if (*(s + i) == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
// int main () {
//    const char str[] = "http://www.google.com";
//    const char ch = '.';

//    printf("%s\n", ft_memchr(str, ch, 12));

//    return(0);
// }
