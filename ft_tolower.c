/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:54:51 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 18:40:34 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
	}
	return (c);
}
// int main(void)
// {
//     printf("%c", ft_tolower('D'));
//     printf("%c", ft_tolower('A'));
//     printf("%c", ft_tolower('V'));
//     printf("%c", ft_tolower('I'));
//     printf("%c", ft_tolower('d'));
//     printf("%c", ft_tolower('2'));
//     return 0;
// }
