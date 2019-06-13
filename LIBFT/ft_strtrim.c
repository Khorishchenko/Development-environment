/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 12:06:09 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 20:44:42 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*mem;
	int		size;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	size = (int)ft_strlen(s);
	if (!(mem = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	if (*s)
	{
		while (whitespace(s[j]) == 1)
			++j;
		while (whitespace(s[size - 1]) == 1 && (j != size))
			--size;
		while (++i < (size - j))
			mem[i] = s[j + i];
	}
	mem[i] = '\0';
	return (mem);
}
