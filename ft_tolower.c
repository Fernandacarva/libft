/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:57:33 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 18:18:56 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c = c + 32;
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	int b;
	
	b = '9';
	
	printf("%d", ft_tolower(b));
	return (0);
}*/