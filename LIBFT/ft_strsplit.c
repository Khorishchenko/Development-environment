/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 11:32:35 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 19:23:17 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int		word_count;
	int		i;

	i = 0;
	if (s[0] == c || s[0] == '\0')
		word_count = 0;
	else
		word_count = 1;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			++word_count;
		++i;
	}
	return (word_count);
}

static int	word_size(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] == c)
		++s;
	while (s[i] != c)
		++i;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		word_count;
	int		w_index;
	int		i;
	char	**mem;

	if (s == NULL)
		return (NULL);
	word_count = word_counter(s, c);
	w_index = 0;
	if (!(mem = (char **)malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	while (w_index < word_count)
	{
		i = 0;
		mem[w_index] = (char *)malloc((word_size(s, c) + 1) * (sizeof(char)));
		while (*s == c)
			++s;
		while (*s != c)
			mem[w_index][i++] = *s++;
		mem[w_index++][i++] = '\0';
	}
	mem[w_index] = NULL;
	return (mem);
}
