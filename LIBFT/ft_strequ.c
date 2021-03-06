/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 09:52:58 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 20:08:54 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1++ == *s2++)
			if (!(*s1) && !(*s2))
				return (1);
	}
	return (0);
}
