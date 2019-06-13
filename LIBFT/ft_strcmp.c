/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 10:02:54 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 10:08:04 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		++s1;
		++s2;
		if (*(s1) != *(s2))
			return ((unsigned char)*s1 - (unsigned char)*s2);
		if (!(*s1) && !(*s2))
			return (0);
		if (!(*s1) && *s2)
			return (-(unsigned char)*s2);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
