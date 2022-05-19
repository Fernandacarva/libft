/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:47:51 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/18 16:07:38 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	f;

	f = 0;
	while (s[f] != '\0')
		f++;
	return (f);
}


/*#include <stdio.h>

int main(void)
{
	char teste[] = "Abacaxi";
	printf("%ld\n", ft_strlen(teste));

	return (0);
}*/
