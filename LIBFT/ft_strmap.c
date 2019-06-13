/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:25:21 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 20:11:10 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
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
			mem[i] = (*f)(s[i]);
			++i;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
