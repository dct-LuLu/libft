/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcucc <lucas@student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:27:09 by jaubry--          #+#    #+#             */
/*   Updated: 2025/05/17 14:01:52 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Function that allocates len * size bytes using malloc.
	Protect from overflowing and sets mem allocated to 0
*/
void	*ft_calloc(size_t len, size_t size)
{
	size_t	bytes;
	void	*alloc;

	bytes = len * size;
	if (((bytes != 0) && (bytes < len || bytes < size)))
		return (NULL);
	alloc = malloc(bytes);
	if (!alloc)
		return (NULL);
	ft_memset(alloc, 0, bytes);
	return (alloc);
}
