/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 11:55:54 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 19:58:34 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	size_t	size;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		if (!(mem = (char *)malloc((size + 1) * (sizeof(char)))))
			return (NULL);
		if (mem)
		{
			ft_strcpy(mem, (char *)s1);
			ft_strcat(mem, s2);
		}
		return (mem);
	}
	return (NULL);
}
