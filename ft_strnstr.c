/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:14:57 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/07 18:14:59 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big)
		return (NULL);
	if (little[i] == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == 0)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{

	while (big[i] && i < len)
	{
		b = 0;
		while (big[i + b] == little[b] && i + b < len)
		{
			b++;
			if (little[b] == '\0')
			{
				return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}*/
