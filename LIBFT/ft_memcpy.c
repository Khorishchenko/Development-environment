/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <cfarnswo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 14:02:34 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/30 12:34:03 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp;

	temp = dst;
	while (n--)
		*temp++ = *(unsigned char *)src++;
	return (dst);
}
