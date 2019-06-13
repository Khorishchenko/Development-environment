/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 17:02:18 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 10:59:32 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*temp_b;
	char	*temp_l;
	char	*temp;
	size_t	i;

	temp_b = (char *)big;
	temp = temp_b;
	temp_l = (char *)little;
	if (*little == '\0')
		return ((char*)big);
	while (*big && (i = len))
	{
		if (*big == *little)
		{
			temp_b = (char *)big;
			while ((*big++ == *little++) && i-- > 0)
				if (!(*little))
					return (temp_b);
		}
		--len;
		big = temp++;
		little = temp_l;
		++big;
	}
	return (NULL);
}
