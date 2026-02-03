/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vector_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:25:52 by jaubry--          #+#    #+#             */
/*   Updated: 2025/11/01 16:31:36 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline size_t	get_vector_index(const t_vector *vector, const void *el)
{
	size_t	len;

	if (!vector || !el)
		return (-1);
	len = 0;
	while (len < vector->element_size)
	{
		if ((vector->data + (len * vector->element_size)) == el)
			return (len);
		len++;
	}
	return (-1);
}
