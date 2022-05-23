/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:21:05 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/23 18:46:12 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	tam;
	char	*aux;

	if (!s1 && !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	tam = ft_strlen(s1);
	while (tam && ft_strchr(set, s1[tam]))
		tam--;
	aux = ft_substr((char *)s1, 0, tam + 1);
	return (aux);
}

#include <stdio.h>

int main(void)
{
	char	*teste1;
	char	*teste2;

	teste1 = "Hello  ";
	teste2 = "Caralho";
	printf("%s\n", ft_strtrim(teste1, teste2));
	return (0);
}
