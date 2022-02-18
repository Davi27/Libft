/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:53:25 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 15:46:55 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*answer;
	size_t	total;

	total = count * size;
	answer = (void *)malloc(total);
	if (answer == NULL)
		return (0);
	ft_memset(answer, 0, total);
	return (answer);
}
