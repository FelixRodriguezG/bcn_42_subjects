/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:49:36 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/10 11:49:41 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char *ft_strdup(char *src)
{
	char *dest;
	int len;
	char dest_start;
	
	dest_start = dest;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'
	return (dest_start);
}

int	main(void)
{	
	char strcopy;

	strcopy = *ft_strdup("Hola mundo!");
	free(strcopy);	
	return (0);
}
