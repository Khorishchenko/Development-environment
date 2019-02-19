/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 11:15:24 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/17 11:17:45 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# IfNDef FT_BOOLEAN_H
# define  FT_BOOLEAN_H

void     ft_putstr ( char * str);

# ifndef TRUE
#   define  TRUE  1
# endif
# ifndef FALSE
#   define  FALSE  0
# endif

typedef  unsigned  char     t_bool;

t_bool     ft_is_even ( int nbr);

# ifndef EVEN
#   define  EVEN ( nbr ) (nbr% 2 == 0 )
# endif

# IfNDef EVEN_MSG
#   define  EVEN_MSG  " У меня есть четное количество аргументов. \ n "
# endif

# IfNDef ODD_MSG
#   define  ODD_MSG  " У меня есть нечетное число аргументов. \ n "
# endif

# ifndef УСПЕХ
#   define  УСПЕХ  0
# endif

# endif

