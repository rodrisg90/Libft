/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:26:13 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/29 13:36:34 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("%d__%d\n", ft_isdigit('2'), ft_isdigit('d'));
	return (0);
}
 */