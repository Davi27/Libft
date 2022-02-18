/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:53:03 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 15:48:14 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (2);
	else if (c > 47 && c < 58)
		return (3);
	else
		return (0);
}
//int main(void){
//	if(ft_isalnum('5') == 0)
//		printf("It is not an alphanumeric");
//	else
//		printf("It is an alphanumeric");
//	return (0);
//}
