/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:28:46 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 18:18:20 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux1;

	aux1 = (char *)s;
	if (*s == c)
		s++;
	return (aux1);
}

/*#include <stdio.h>
#include <string.h>

int main(void) 
{
   int len;
   const char str[] = "fernanda";
   const char ch = 'a';
   char *ret;

	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/