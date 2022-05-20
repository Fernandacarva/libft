/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:01:21 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/16 10:23:15 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*aux1;
	char	*aux2;
	size_t	n;
	size_t	tam;
	
	
	aux1 = dst;
	aux2 = (char *)src;
	n = size;
	while (n-- != 0 && *aux1 != '\0')
		aux1++;
	tam = aux1 - dst;
	n = size - tam;
	if (n == 0)
		return (tam + ft_strlen(aux2));
	while (*aux2 != '\0')
	{
		if (n != 1)
		{
			*aux1++ = *aux2;
				n--;
		}
		aux2++;	
	}
	*aux2 = '\0';
	return (tam + (aux2 - src));
}

#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "this is ";
    char last[] = " a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}