/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_normalize.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:17:13 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:59:53 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_NORMALIZE_H
# define VEC4_NORMALIZE_H

# include "vectors_types.h"
# include "vec4_length.h"
# include "vec4_scalar.h"
# include "vec4_constructors.h"
# include "quat_constructors.h"

/*
	Normalize with zero-check to avoid division by zero
	Returns original vector if length is zero for safety
*/
static inline t_vec4	vec4_normalize(const t_vec4 v)
{
	const float	len = vec4_length(v);

	if (len == 0.0f)
		return (vec4_zero());
	return (vec4_div_scalar(v, len));
}

static inline t_vec4	vec4_normalize_safe(const t_vec4 q)
{
	float	len;

	if (!vec4_isfinite(q))
		return (vec4_zero());
	len = vec4_length_safe(q);
	if (!(len > 0.0f) || !isfinite(len))
		return (vec4_zero());
	return (vec4_scale(q, 1.0f / len));
}

/*
	Same as vec4 normalize safe but returns the quaternion identity instead
	of a zero-ed vec4
*/
static inline t_quat	quat_normalize_safe(const t_quat q)
{
	float	len;

	if (!vec4_isfinite(q))
		return (quat_identity());
	len = vec4_length_safe(q);
	if (!(len > 0.0f) || !isfinite(len))
		return (quat_identity());
	return (vec4_scale(q, 1.0f / len));
}

#endif//VEC4_NORMALIZE_H
