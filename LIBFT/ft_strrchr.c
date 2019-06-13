/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 11:17:04 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 01:43:31 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		--i;
	}
	return (NULL);
}
