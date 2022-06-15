/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:33:30 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/15 14:23:12 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char	*little, size_t len)
{
	size_t	sz;

	sz = ft_strlen(little);
	if (!sz)
	{
		return ((char *)big);
	}
	while (*big && sz <= len--)
	{
		if (!ft_strncmp(big, little, sz))
		{
			return ((char *)big);
		}
		big++;
	}
	return (0);
}
