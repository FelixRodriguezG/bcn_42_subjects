/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 16:18:26 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/09 16:50:48 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef	FT_BOOLEAN_H
#define	FT_BOOLEAN_H

//********* Prototypes funcions *************

void	ft_putstr(char *str);

//____ Type definition for unsigned char type ____

typedef unsigned char	t_bool;

t_bool	ft_is_even(int nbr);

//********* Macros *************
#ifdef
#define TRUE 1
#endif

#ifdef
#define FALSE 0
#endif

#ifndef EVEN
#define EVEN(nbr) (nbr % 2 == 0)
#endif

#ifdef
#define EVEN_MSG "I have an even number of arguments"
#endif

#endif
#define OOD_MSG "I have an odd number of arguments"
#endif

#endif
