/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 10:14:01 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 17:42:39 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n && *s1 && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		++s1;
		++s2;
		if (!(*s1) && !(s2))
			return (0);
		if (!(*s1) && *s2)
			return (-(unsigned char)*s2);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
