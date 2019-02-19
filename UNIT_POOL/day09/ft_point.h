/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 11:21:33 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/17 11:21:51 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# IfNDef FT_POINT_H
# define  FT_POINT_H

typedef  struct     s_point
{
    int     x;
    int     y;
} t_point;

void             set_point (t_point * point);

# endif

