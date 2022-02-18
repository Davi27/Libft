/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:02:54 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 19:11:11 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_houses(int n)
{
	size_t	house_num;

	house_num = 0;
	if (n < 0)
	{
		house_num++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		house_num++;
	}
	return (house_num);
}

char	*ft_itoa(int n)
{
	char	*rtn;
	size_t	house_num;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	house_num = ft_houses(n);
	rtn = malloc(sizeof(char) * (house_num + 2));
	if (!rtn)
		return (NULL);
	rtn[house_num] = '\0';
	if (n < 0)
	{
		rtn[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		rtn[house_num - 1] = ((n % 10) + '0');
		n /= 10;
		house_num--;
	}
	return (rtn);
}
