/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:07:30 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/05 15:41:54 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

/**
 * @brief  Appends 'src' to the end of 'dest' while guaranteeing null-termination
 *         and preventing buffer overflows up to 'size' bytes.
 * 
 * @details Standard BSD strlcat behavior:
 *          1. If 'size' <= initial dest length, returns (size + slen) to flag
 *             that the buffer was too small (no characters copied).
 *          2. Copies characters leaving at least 1 byte for the final '\0'.
 *          3. Null-terminates the result safely.
 * 
 * @param  dest Target buffer containing the original string.
 * @param  src  Source string to append.
 * @param  size Total allocated size of the 'dest' buffer.
 * @return Total length of the string it tried to create (dlen + slen).
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	int				i;

	dlen = ft_strlen_restrict(dest, size);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (size + slen);
	i = 0;
	while (src[i] != '\0' && size > dlen + i + 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

/**
 * @brief  Calculates the length of a string up to a maximum of 'size' bytes.
 * 
 * @details SAFETY CONTROL: Stops counting if 'size' is reached before finding 
 *          a null terminator ('\0'). This prevents out-of-bounds reading and
 *          Segmentation Faults when 'str' is not null-terminated within 'size'.
 * 
 * @param  str  Pointer to the string.
 * @param  size Maximum number of bytes to inspect.
 * @return String length or 'size' if no null terminator is found within limit.
 */
unsigned int	ft_strlen_restrict(char *str, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0' && len < size)
	{
		str++;
		len++;
	}
	return (len);
}

/**
 * @brief  Calculates the length of a null-terminated string.
 * 
 * @param  str Pointer to the string to measure.
 * @return Length of the string (excluding the null terminator).
 */
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	// ==========================================
	// CASO 1: Caso Ideal (Hay espacio de sobra)
	// ==========================================
	char dest1[50] = "Hola ";
	char src1[] = "mundo!";
	unsigned int ret1;

	printf("--- CASO 1: Espacio de sobra ---\n");
	ret1 = ft_strlcat(dest1, src1, 50);
	printf("Resultado: [%s]\n", dest1); // Debe mostrar: "Hola mundo!"
	printf("Retorno:   %u (Esperado: 11)\n\n", ret1);


	// ==========================================
	// CASO 2: Truncamiento (Falta espacio, pero mete algo)
	// ==========================================
	// "Hola " mide 5. El búfer mide 8.
	// Solo caben 2 letras de "mundo!" y el '\0' final.
	char dest2[8] = "Hola ";
	char src2[] = "mundo!";
	unsigned int ret2;

	printf("--- CASO 2: Truncamiento parcial ---\n");
	ret2 = ft_strlcat(dest2, src2, 8);
	printf("Resultado: [%s]\n", dest2); // Debe mostrar: "Hola mu"
	printf("Retorno:   %u (Esperado: 11)\n\n", ret2);


	// ==========================================
	// CASO 3: Búfer del tamaño exacto de dest
	// ==========================================
	// Pasamos size = 5. Como "Hola " ya ocupa 5 caracteres (sin contar el nulo),
	// se activa la comprobación excepcional: NO modifica nada.
	char dest3[20] = "Hola ";
	char src3[] = "mundo!";
	unsigned int ret3;

	printf("--- CASO 3: Size menor o igual al texto inicial ---\n");
	ret3 = ft_strlcat(dest3, src3, 5);
	printf("Resultado: [%s]\n", dest3); // Debe mostrar: "Hola " (intacto)
	printf("Retorno:   %u (Esperado: 11)\n\n", ret3);


	// ==========================================
	// CASO 4: Size es 0
	// ==========================================
	// No debe tocar la memoria y debe retornar 0 + longitud de src
	char dest4[20] = "Hola ";
	char src4[] = "mundo!";
	unsigned int ret4;

	printf("--- CASO 4: Size es 0 ---\n");
	ret4 = ft_strlcat(dest4, src4, 0);
	printf("Resultado: [%s]\n", dest4); // Debe mostrar: "Hola " (intacto)
	printf("Retorno:   %u (Esperado: 6)\n\n", ret4);

	return (0);
}
*/
