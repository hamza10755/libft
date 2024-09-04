/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:44:41 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/04 17:53:34 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *str, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
		{
			count++;
			while (str[i] && str[i] != sep)
				i++;
		}
	}
	return (count);
}

static int	ft_len(char const *s, char sep)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	return (i);
}

static char	**freesplit(char **sp, int i)
{
	while (sp[i])
		free(sp[i]);
	free(sp);
	return (NULL);
}

static char	**ft_find_fill(char **strs, char const *s, char c)
{
	int	i;
	int	j;
	int	r;

	i = 0;
	r = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			strs[r] = malloc(ft_len(&s[i], c) + 1);
			if (!strs[r])
				return (freesplit(strs, r - 1));
			while (s[i] && s[i] != c)
				strs[r][j++] = s[i++];
			strs[r][j] = '\0';
			r++;
		}
		else
			i++;
	}
	strs[r] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		word_count;

	word_count = count_words(s, c);
	strs = malloc((word_count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strs = ft_find_fill(strs, s, c);
	return (strs);
}
