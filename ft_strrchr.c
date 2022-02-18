/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:16:25 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 18:39:14 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (c == *(str + i))
		return ((char *)str + i);
	while (i > 0)
	{
		i--;
		if (c == *(str + i))
			return ((char *)str + i);
	}
	return (0);
}
// int main () {
//    const char str[] = "www.google.com";
//    const char ch = '.';
//    printf("%s\n", ft_strrchr(str, ch)); 
//    return(0);
// }
