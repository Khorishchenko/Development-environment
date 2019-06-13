/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:13:43 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/28 16:58:31 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*temp;
	char	*temp_l;
	char	*slow_temp;

	temp = (char *)big;
	temp_l = (char *)little;
	slow_temp = temp;
	if (*little == '\0')
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			temp = (char *)big;
			while (*big++ == *little++)
				if (!(*little))
					return (temp);
		}
		big = slow_temp++;
		little = temp_l;
		++big;
	}
	return (NULL);
}
