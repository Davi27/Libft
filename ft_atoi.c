/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:26:02 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 21:07:57 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		signal;

	i = 0;
	nbr = 0;
	signal = 0;
	while ((str[i] == ' ') || (str[i] == '\t')
		|| (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		signal++;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (signal == 1)
		return (-nbr);
	return (nbr);
}
