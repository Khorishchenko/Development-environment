/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 09:42:53 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/30 12:40:16 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = b;
	while (len--)
		*(unsigned char *)temp++ = (unsigned char)c;
	return (b);
}
