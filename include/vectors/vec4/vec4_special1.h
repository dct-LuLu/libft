/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_special1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:34:20 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:54:44 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "vectors_types.h"
# include "vec4_scalar.h"
# include <math.h>

static inline float vec4_dot(const t_vec4 a, const t_vec4 b)
{
	return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w));
}

static inline float	vec4_length2(const t_vec4 v)
{
	return ((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w));
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

static inline t_vec4	vec4_normalize(t_vec4 q)
{
	float	len;

	if (!vec4_isfinite(q))
		return (vec4_identity());
	len = vec4_length_safe(q);
	if (!(len > 0.0f) || !isfinite(len))
		return (vec4_identity());
	return (vec4_scale(q, 1.0f / len));
}
