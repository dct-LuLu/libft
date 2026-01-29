/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_special1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 08:07:39 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 17:05:41 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_SPECIAL1_H
# define VEC3_SPECIAL1_H

# include "vectors_types.h"
# include "vec3_scalar.h"
# include <math.h>

static inline float	vec3_dot(const t_vec3 a, const t_vec3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

/*
	Cross product optimized for direct register computation
	No temporary variables for maximum performance
*/
static inline t_vec3	vec3_cross(const t_vec3 a, const t_vec3 b)
{
	return ((t_vec3){{
			a.y * b.z - a.z * b.y,
			a.z * b.x - a.x * b.z,
			a.x * b.y - a.y * b.x
		}});
}

static inline float	vec3_length2(const t_vec3 v)
{
	return (v.x * v.x + v.y * v.y + v.z * v.z);
}

static inline float	vec3_length(const t_vec3 v)
{
	return (sqrtf(vec3_length2(v)));
}

static inline float	vec3_length_safe(t_vec3 v)
{
	const t_vec3	a = vec3_abs(v);
	const float		m = vec3_comp_max(a);
	t_vec3			s;

	if (m == 0.0f)
		return (0.0f);
	s = vec3_div_scalar(a, m);
	return (m * sqrtf(vec3_length2(s)));
}

static inline t_vec3	vec3_normalize_safe(t_vec3 v)
{
	float	len;

	if (!vec3_isfinite(v))
		return (vec3_zero());
	len = vec3_length_safe(v);
	if (!(len > 0.0f) || !isfinite(len))
		return (vec3_zero());
	return (vec3_div_scalar(v, len));
}

static inline t_vec3	vec3_lerp(const t_vec3 a, const t_vec3 b, const float t)
{
	return ((t_vec3){{
			a.x * (1.0f - t) + b.x * t,
			a.y * (1.0f - t) + b.y * t,
			a.z * (1.0f - t) + b.z * t
		}});
}

#endif
