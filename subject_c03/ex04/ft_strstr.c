/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 19:00:00 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/04 19:55:07 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void    run_test(int test_num, char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    // Caso 1: Subcadena en el medio
    run_test(1, "Hola mundo cruel", "mundo");

    // Caso 2: Subcadena al principio
    run_test(2, "42 Barcelona", "42");

    // Caso 3: Subcadena al final
    run_test(3, "Programar en C es divertido", "divertido");

    // Caso 4: `to_find` está vacío (debe retornar `str`)
    run_test(4, "Cualquier texto", "");

    // Caso 5: Subcadena no existe en el string
    run_test(5, "Piscina de 42", "python");

    // Caso 6: String vacío y `to_find` vacío
    run_test(6, "", "");

    // Caso 7: String vacío y `to_find` con contenido
    run_test(7, "", "test");

    // Caso 8: Coincidencias parciales antes de encontrar la correcta
    run_test(8, "AAB AABC AABCD", "AABCD");

    // Caso 9: `to_find` más largo que `str`
    run_test(9, "corto", "string_muy_largo");

    return (0);
}

void    run_test(int test_num, char *str, char *to_find)
{
    char *result_ft;
    char *result_std;

    result_ft = ft_strstr(str, to_find);
    result_std = strstr(str, to_find);

    printf("Test %d: str = \"%s\" | to_find = \"%s\"\n", test_num, str, to_find);
    
    if (result_ft == result_std)
    {
        printf(" -> [OK] Punteros coinciden\n\t Resultado -> %s \n", result_ft ? result_ft : "NULL");
    }
    else
    {
        printf(" -> [KO] Error.\n");
        printf("    Tu función: %s\n", result_ft ? result_ft : "NULL");
        printf("    Original:   %s\n", result_std ? result_std : "NULL");
    }
    printf("--------------------------------------------------\n");
}*/
