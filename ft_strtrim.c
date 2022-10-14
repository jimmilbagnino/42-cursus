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

int	ft_checkchar (char const c, char const *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*scopy;
	int	i;
	int	j;
	int	posFin;
	
	i = 0;
	j = 0;
	posFin = ft_strlen(s1) - 1;
	while (ft_checkchar(s1[i], set) == 1)
		i++;
	while (ft_checkchar(s1[posFin], set) == 1)
		posFin--;
	scopy = malloc(sizeof(char) * (posFin - i + 1));
	if (!scopy)
		return (NULL);
	while (i <= posFin)
	{
		scopy[j] = s1[i];
		j++;
		i++;
	}
	scopy[j] = '\0';
	return (scopy);
}
