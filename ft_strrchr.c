/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:51:51 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/23 15:51:58 by fernanda         ###   ########.fr       */
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