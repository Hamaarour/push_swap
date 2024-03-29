/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:49:45 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/09 00:15:38 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	count_word(char const *s, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[i] != sep && s[i])
	{
		i++;
		count++;
	}
	while (s[i])
	{
		if (s[i] != sep && s[i - 1] == sep)
			count++;
		i++;
	}
	return (count);
}

static int	free_space(char **p)
{
	size_t	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	return (1);
}

static	char	**aloc(char const *s, char sep)
{
	char	**k;

	k = (char **)ft_calloc((count_word(s, sep) + 1), sizeof(char *));
	if (!k)
		return (NULL);
	return (k);
}

static int	ww(char const *s, char sep, int i)
{
	while (s[i] && s[i] != sep)
		i++;
	return (i);
}

char	**ft_split(char const *s, char sep)
{
	char	**p;
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	p = aloc(s, sep);
	if (!p)
		return (NULL);
	while (s[i])
	{
		if (s[i] != sep)
		{
			start = i;
			i = ww(s, sep, i);
			p[j++] = ft_substr(s, start, (i - start));
			(!p) && (free_space(p));
		}
		else
			i++;
	}
	return (p);
}
