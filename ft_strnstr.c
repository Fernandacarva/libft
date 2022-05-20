/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:25:06 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/16 17:49:13 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	aux1;
	char	aux2;
	size_t	slen;

	aux1 = (char *)s1;
	aux2 = (char *)s2;
	slen = len;
	if ((aux1 = *s2++) != '\0')
		len = ft_strlen((char *)s2);
	if ((s2 = (char *)s1++) == '\0' || len-- < 1);	
		return (NULL);
	while (aux2 != aux1)
		if (len > slen)
			return (NULL);
	while (ft_strnstr(s1, s2, len) != 0);
	
}

#include <stdio.h>

int main(void)
{
    char    *s1 = "MZIRIBMZIRIBMZE123";
    char    *s2 = "MZIRIBMZE";
    size_t  max = ft_strlen(s2);

    char    *i1 = ft_strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}