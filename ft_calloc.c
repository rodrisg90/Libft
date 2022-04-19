/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:57:05 by rodsanch          #+#    #+#             */
/*   Updated: 2022/04/12 16:15:16 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	i = count * size;
	result = malloc(i);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, i);
	return (result);
}

/* int main()
{
    size_t count = 3;
    size_t size = 5;
    printf("%s\n", calloc(count, size));
    printf("%s\n", ft_calloc(count, size));
}
 */