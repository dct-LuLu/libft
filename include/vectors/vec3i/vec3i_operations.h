/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3i_operations.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 08:01:15 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:31:02 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3I_OPERATIONS_H
# define VEC3I_OPERATIONS_H

# include "vectors_types.h"

static inline t_vec3i	vec3i_add(const t_vec3i a, const t_vec3i b)
{
	return ((t_vec3i){{a.x + b.x, a.y + b.y, a.z + b.z}});
}

static inline t_vec3i	vec3i_sub(const t_vec3i a, const t_vec3i b)
{
	return ((t_vec3i){{a.x - b.x, a.y - b.y, a.z - b.z}});
}

static inline t_vec3i	vec3i_mult(const t_vec3i a, const t_vec3i b)
{
	return ((t_vec3i){{a.x * b.x, a.y * b.y, a.z * b.z}});
}

#endif
