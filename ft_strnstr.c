/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:33:30 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/09 14:46:23 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return ((char *)(big));
	if (!big || little[0] == '\0')
		return ((char *)(big));
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] && little[j]
			&& i + j < len && big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}*/







#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	i_aux2;

	index = 0;
	if (!haystack || !needle || needle[0] == '\0')
		return ((char *)(haystack));

	while (haystack[index] != '\0' && index < len)
	{
		i_aux2 = 0;
		if (haystack[index] == needle[i_aux2])
		{
			while (haystack[index + i_aux2] == needle[i_aux2] && needle[i_aux2] != '\0')
				i_aux2++;
			if (needle[i_aux2] == '\0')
				return ((char *)haystack + index);
			else
				return (0);

		}
		index++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int main(void)
{
	char *a = "Teste";
	char *b = "est";
	char *c = "Teste";
	char *d = "est";
	size_t s;
	
	s = 4;
	printf("%s\n", ft_strnstr(a, b, s));
	printf("%s\n", strnstr(c, d, s));
	return (0);	
}*/
