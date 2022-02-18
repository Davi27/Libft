/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:20:03 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 15:44:40 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		*(str + i) = '\0';
		i++;
	}
	s = str;
}

// int main(void) {
// 	char *phrase = "mucho mas y ademas";
// 	printf("%s", phrase);
// 	ft_bzero(phrase, 7);
// 	printf("%s", phrase);
// }
