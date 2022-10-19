/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:42:01 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/08 22:42:03 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkchar(char const c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*scopy;
	int		i;
	int		posfin;

	i = 0;
	posfin = ft_strlen(s1) - 1;
	while (ft_checkchar(s1[i], set) == 1)
		i++;
	while (ft_checkchar(s1[posfin], set) == 1)
		posfin--;
	if ((posfin - i) > (int)ft_strlen(s1))
		scopy = (char *)malloc(sizeof(char) * (1));
	else
		scopy = (char *)malloc(sizeof(char) * (posfin - i + 2));
	if (!scopy)
		return (NULL);
	ft_memcpy(scopy, &s1[i], posfin - i + 1);
	scopy[posfin - i + 2] = '\0';
	return (scopy);
}
