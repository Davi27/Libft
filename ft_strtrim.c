/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:52:55 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 19:06:08 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_set_check(char c, char const *set)
{
	char	*reset;
	int		i;

	reset = (char *)set;
	i = 0;
	while (reset[i])
	{
		if (c == reset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rtn;
	size_t	len;
	size_t	alpha;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	rtn = (char *) malloc(sizeof(s1) * len);
	if (!rtn || !s1)
		return (NULL);
	alpha = 0;
	while (ft_set_check(s1[alpha], set))
		alpha++;
	while (ft_set_check(s1[len - 1], set))
		len--;
	rtn = ft_substr(s1, alpha, len - alpha);
	return (rtn);
}
