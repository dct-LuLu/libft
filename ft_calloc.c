/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:27:09 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/06 15:35:19 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t size)
{
	size_t	bytes;
	void	*alloc;

	bytes = len * size;
	if ((bytes != 0) && (bytes < len || bytes < size))
		return (NULL);
	alloc = malloc(bytes);
	if (!alloc)
		return (NULL);
	ft_memset(alloc, 0, bytes);
	return (alloc);
}

/*
#include <stdint.h>
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	char	*t;

	t = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("%lu, %d\n", SIZE_MAX * SIZE_MAX, t == NULL);
	return (0);
}
*/

/*
	Maybe handle overflows ...?
*/
