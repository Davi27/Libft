/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:46:49 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 15:51:47 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (2);
	else
		return (0);
}
// int main(void)
// {
//     if(ft_isalpha('\t'))
//         printf("It is an alpha");
//     else
//         printf("Not an alpha");
//     return 0;
// }
