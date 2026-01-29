/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_operations.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 08:02:00 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:52:16 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_OPERATIONS_H
# define VEC4_OPERATIONS_H

# include "vectors_types.h"

static inline t_vec4	vec4_add(const t_vec4 a, const t_vec4 b)
{
	return ((t_vec4){{a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w}});
}

static inline t_vec4	vec4_sub(const t_vec4 a, const t_vec4 b)
{
	return ((t_vec4){{a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w}});
}

static inline t_vec4	vec4_mult(const t_vec4 a, const t_vec4 b)
{
	return ((t_vec4){{a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w}});
}

#endif
