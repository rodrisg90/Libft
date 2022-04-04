/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:39:48 by rodsanch          #+#    #+#             */
/*   Updated: 2022/04/04 12:20:31 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	substr = (char *)malloc(len + 1);
	if (s == NULL || substr == NULL)
		return (NULL);
	size = len;
	if (size > ft_strlen(s) && start < ft_strlen(s))
		size = ft_strlen(s) - start;
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