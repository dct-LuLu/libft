/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4i_operations.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 08:02:49 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:34:25 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4I_OPERATIONS_H
# define VEC4I_OPERATIONS_H

# include "vectors_types.h"

static inline t_vec4i	vec4i_add(const t_vec4i a, const t_vec4i b)
{
	return ((t_vec4i){{a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w}});
}

static inline t_vec4i	vec4i_sub(const t_vec4i a, const t_vec4i b)
{
	return ((t_vec4i){{a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w}});
}

static inline t_vec4i	vec4i_mult(const t_vec4i a, const t_vec4i b)
{
	return ((t_vec4i){{a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w}});
}

#endif
