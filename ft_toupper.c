/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:51:18 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 18:41:48 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
	}
	return (c);
}
// int main(void)
// {
//     printf("%c", ft_toupper('d'));
//     printf("%c", ft_toupper('a'));
//     printf("%c", ft_toupper('v'));
//     printf("%c", ft_toupper('i'));
//     printf("%c", ft_toupper('D'));
//     printf("%c", ft_toupper('2'));
//     return 0;
// }
