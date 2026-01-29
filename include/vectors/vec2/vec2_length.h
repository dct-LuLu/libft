/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_length.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:58:35 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:54:41 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_LENGTH_H
# define VEC2_LENGTH_H

# include "vectors_types.h"
# include "vec2_utils.h"
# include "vec2_scalar.h"

static inline float	vec2_length2(const t_vec2 v)
{
	return ((v.x * v.x) + (v.y * v.y));
}

static inline float	vec2_length(const t_vec2 v)
{
	return (sqrtf(vec2_length2(v)));
}

static inline float	vec2_length_safe(t_vec2 v)
{
	const t_vec2	a = vec2_abs(v);
	const float		m = vec2_comp_max(a);
	t_vec2			s;

	if (m == 0.0f)
		return (0.0f);
	s = vec2_div_scalar(a, m);
	return (m * sqrtf(vec2_length2(s)));
}

#endif//VEC2_LENGTH_H
