/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:00:57 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/29 15:18:52 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main(void)
{
	int	x;

	x = '5';
	printf("%d\n", ft_isascii('4'));
	return (0);
}
 */