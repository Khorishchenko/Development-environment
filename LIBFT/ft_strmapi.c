/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:35:31 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 20:12:58 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mem;
	int		i;

	i = 0;
	if (s && f)
	{
		if (!(mem = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
			return (NULL);
		while (s[i])
		{
			mem[i] = (*f)(i, s[i]);
			++i;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
