/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:56:11 by rodsanch          #+#    #+#             */
/*   Updated: 2022/04/06 17:21:04 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_wordlen(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			counter++;
			while (*s != '\0' && *s != c)
					s++;
		}
	}
	return (counter);
}

char	**ft_free(char **s, size_t index)
{
	while (s[index] != NULL && index >= 0)
	{
		free(s[index]);
		s[index] = NULL;
		index--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	len;
	size_t	counter;
	char	**words;

	words = (char **)malloc(sizeof(char *) * (ft_wordlen(s, c) + 1));
	if (!s || !words)
		return (NULL);
	counter = ft_wordlen(s, c);
	index = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len ++;
			if (index < counter && !(words[index++] = ft_substr(s, 0, len)))
				return (ft_free(words, index));
			s += len;
		}
	}
	words[index] = 0;
	return (words);
}

/* int	main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("bonjour je m'appel Arthur", 'j');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
 */