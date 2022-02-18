/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:03:51 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 16:34:10 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
// int main(void)
// {
//     char str[] = "Ao infinito e alem";
//     printf("%s\n", ft_memset(str, '$', 6));
//     printf("%s\n", memset(str, '$', 9));
//     return 0;
// }
