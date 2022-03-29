/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:11:07 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/28 19:21:14 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("%d\n", ft_isalpha('g'));
	return (0);
}
 */