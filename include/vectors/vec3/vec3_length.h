/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_length.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 08:07:39 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 21:02:47 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_LENGTH_H
# define VEC3_LENGTH_H

# include "vectors_types.h"
# include "vec3_scalar.h"
# include "vec3_utils.h"

static inline float	vec3_length2(const t_vec3 v)
{
	return ((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
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

#endif//VEC3_LENGTH_H
