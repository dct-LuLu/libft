/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_length.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:16:04 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:57:08 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_LENGTH_H
# define VEC4_LENGTH_H

# include "vectors_types.h"
# include "vec4_utils.h"
# include "vec4_scalar.h"

static inline float	vec4_length2(const t_vec4 v)
{
	return ((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w));
}

static inline float	vec4_length(const t_vec4 v)
{
	return (sqrtf(vec4_length2(v)));
}

static inline float	vec4_length_safe(t_vec4 v)
{
	const t_vec4	v_abs = vec4_abs(v);
	const float		m = vec4_comp_max(v_abs);
	t_vec4			s;

	if (m == 0.0f)
		return (0.0f);
	s = vec4_div_scalar(v_abs, m);
	return (m * sqrtf(vec4_length2(s)));
}

#endif//VEC4_LENGTH_H
