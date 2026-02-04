/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 00:20:05 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/04 02:25:39 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	vector_copy(t_vector *dst, const t_vector *src)
{
	if (!src || !src->data)
		return (1);
	vector_init(dst, src->element_size);
	if (vector_add(dst, src->data, src->num_elements) != 0)
	{
		free_vector(dst);
		return (1);
	}
	return (0);
}
