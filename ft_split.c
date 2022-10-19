/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:46:53 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/09 16:46:56 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countstr(char const *s, char c)
{
	int	i;
	int	count;
	int	countstr;

	i = 0;
	count = 0;
	countstr = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && count == 0)
		{
			countstr++;
			count = 1;
		}
		else if (s[i] == c)
			count = 0;
		i++;
	}
	return (countstr);
}

char	*newstring(char const *s, int start, int finish)
{
	char	*newstring;
	int		i;

	i = 0;
	newstring = malloc(sizeof(char) * (finish - start + 1));
	if (!newstring)
		return (NULL);
	while (start < finish)
	{
		newstring[i] = s[start];
		start++;
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		a;
	char	**split;

	split = malloc((sizeof(char *) * (countstr(s, c) + 1)));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	a = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && a < 0)
			a = i;
		else if ((s[i] == c || i == ft_strlen(s)) && a >= 0)
		{
			split[j] = newstring(s, a, (int)i);
			j++;
			a = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
