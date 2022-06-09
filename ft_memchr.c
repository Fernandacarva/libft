/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:55:06 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/09 11:54:05 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux1;

	aux1 = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*aux1 == (unsigned char) c)
			return (aux1);
		aux1++;
	}
	return (NULL);
}
