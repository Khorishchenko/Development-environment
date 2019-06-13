/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 17:28:01 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/21 13:50:39 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char		*dup;
	char		*temp;
	size_t		len;

	len = 0;
	while (s1[len])
		++len;
	dup = (char*)malloc((len + 1));
	if (!dup)
		return (NULL);
	temp = dup;
	while (*s1)
		*temp++ = *s1++;
	*temp = '\0';
	return (dup);
}
