/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:56:52 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/07 14:56:55 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	//const char 	*s1;
	
	//s1 = s;
	substr = malloc(sizeof(substr) * (ft_strlen(s) - start));
	if (substr == NULL)
		return (NULL);
	substr = ft_memcpy(substr, &s[start], len);
	return (substr);
}
/*
int main()
{
	char a[] = "ciaomario";
	char *b; 
	b = ft_substr(a, 0, 2);
	printf("%s", b);
	
}*/
//ft_substr(str, 0, 10)
