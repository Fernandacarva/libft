/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:58:32 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/23 13:21:15 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nbr;
	int		count;
	int		nb;
	int		alg;

	nb = n;
	alg = 0;
	while (nb)
	{
		nb = nb / 10;
		alg++;
	}
	count = 0;
	if (n == 0)
	{
		nbr = malloc(sizeof(char) * ++alg);
		if (!nbr)
			return (NULL);
		nbr[alg - 1 - count] = '0';
		nbr[alg] = '\0';
		return (nbr);
	}
	else if (n > 0)
	{
		nbr = malloc(sizeof(char) * alg);
		if (!nbr)
			return (NULL);
		while (n > 0)
		{
			nbr[alg - 1 - count] = (n % 10) + '0';
			n = n / 10;
			count++;
		}
		nbr[alg] = '\0';
		return (nbr);
	}
	else if (n < 0)
	{
		nbr = malloc(sizeof(char) * ++alg);
		if (!nbr)
			return (NULL);
		while (n < 0)
		{
			nbr[alg - 1 - count] = -(n % 10) + '0';
			n = n / 10;
			count++;
		}
		nbr[alg - 1 - count++] = '-';
		nbr[alg] = '\0';
		return (nbr);
	}
	return (NULL);
}

// #include <stdio.h>

// int    main(void)
// {
//     int    number;

// 	//number = -10;
// 	number = -1234567890;
// 	//number = -2147483648;
// 	//number = 0;
//     //number = 2147483647;
//     printf("%s\n", ft_itoa(number));
//     return (number);
// }
