/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:33:30 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/09 15:20:23 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			while (haystack[index + i_aux2] == needle[i_aux2]
				&& needle[i_aux2] != '\0')
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
