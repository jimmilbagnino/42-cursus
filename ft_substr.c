/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <rgalata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:34:35 by rgalata           #+#    #+#             */
/*   Updated: 2023/02/28 18:55:40 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr && !s)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return (substr);
}