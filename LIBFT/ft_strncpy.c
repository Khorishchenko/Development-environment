/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:22:29 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/21 13:08:10 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, char *src, size_t len)
{
	char *ptr;

	ptr = dst;
	while (len > 0 && *src != '\0')
	{
		*dst++ = *src++;
		--len;
	}
	while (len > 0)
	{
		*dst = '\0';
		--len;
		++dst;
	}
	dst = ptr;
	return (dst);
}
