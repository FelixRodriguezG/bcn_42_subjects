/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:56:21 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/04 16:56:23 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dlen;
	unsigned int	j;

	dlen = 0;
	j = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[j] != '\0' && j < nb)
	{
		dest[dlen + j] = src[j];
		j++;
	}
	dest[dlen + j] = '\0';
	return (dest);
}
/*
int main(void)
{
    // Prueba 1: Happy path
    char            dest1[20] = "Hola mun";
    char            src1[] = "do!";
    unsigned int    nb1 = 3;

    printf("--- PRUEBA 1 ---\n");
    printf("Antes: dest = \"%s\", src = \"%s\", nb = %u\n", dest1, src1, nb1);
    ft_strncat(dest1, src1, nb1);
    printf("Despues: dest = \"%s\"\n\n", dest1);

    // Prueba 2: Concatenar más caracteres de los que tiene src (probando límites)
    char            dest2[30] = "Programacion ";
    char            src2[] = "C Pool";
    unsigned int    nb2 = 10;

    printf("--- PRUEBA 2 ---\n");
    printf("Antes: dest = \"%s\", src = \"%s\", nb = %u\n", dest2, src2, nb2);
    ft_strncat(dest2, src2, nb2);
    printf("Despues: dest = \"%s\"\n\n", dest2);

    // Prueba 3: Con nb = 0 (no debería añadir nada más que el terminador)
    char            dest3[20] = "Test";
    char            src3[] = "extra";
    unsigned int    nb3 = 0;

    printf("--- PRUEBA 3 ---\n");
    printf("Antes: dest = \"%s\", src = \"%s\", nb = %u\n", dest3, src3, nb3);
    ft_strncat(dest3, src3, nb3);
    printf("Despues: dest = \"%s\"\n", dest3);

    return (0);
}
*/
