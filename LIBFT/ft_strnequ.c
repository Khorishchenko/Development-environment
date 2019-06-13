/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 09:57:25 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 19:52:27 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	if (ft_strncmp(s1, s2, n) != 0)
		return (0);
	return (1);
}
