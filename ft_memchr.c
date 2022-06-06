/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:55:06 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/31 17:56:58 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*aux1;

	aux1 = s;
	while (n-- > 0)
	{
		if (*aux1 == c)
			return ((char *) aux1);
		aux1++;
	}
	return (NULL);
}
