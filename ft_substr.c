/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:39:48 by rodsanch          #+#    #+#             */
/*   Updated: 2022/04/12 16:12:16 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	size = len;
	if (size > ft_strlen(s) && start < ft_strlen(s))
		size = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * len + 1);
	if (start > ft_strlen(s))
	{
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	ft_strlcpy(substr, s + start, size + 1);
	return (substr);
}

/* int	main(void)
{
	char *str = "tripouille";
	size_t size = 10;
	printf("%s\n", ft_substr(str, 5, size));
	return (0);
}
 */