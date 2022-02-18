/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:16:47 by damartin          #+#    #+#             */
/*   Updated: 2022/02/10 18:59:42 by damartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	total_words(char const *s, char c)
{
	int	total;
	int	j;
	int trigger;

	total = 0;
	j = 0;
	trigger = 0;
	while (s[j])
	{
		if (s[j] != c && trigger == 0)
		{	
			total++;
			trigger = 1;
		}
		else if (s[j] == c)
			trigger = 0;
		j++;
	}
	return (total);
}

static char *create_word(const char *s, int first_char, int last_char)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((last_char - first_char + 1) * sizeof(char));
	while (first_char < last_char)
		word[i++] = s[first_char++];
	word[i] = '\0';
	return (word);
}

static char	**join_words(char **arr, char const *s, char c)
{
	size_t 	i;
	size_t 	word;
	int		first_char;

	word = 0;
	i = 0;
	first_char = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && first_char < 0)
			first_char = i;
		else if ((s[i] == c || i == ft_strlen(s)) && first_char >= 0)
		{
			arr[word++] = create_word(s, first_char, i);
			first_char = -1;
		}
		i++;
	}
	arr[word] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char **arr;
	int	total;
	
	if (!s)
		return (0);
	total = total_words(s, c);
	arr = malloc((total + 1) * sizeof(char *));
	if (!arr)
		return (0);
	return (join_words(arr, s, c));
}
