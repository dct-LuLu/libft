/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:51:05 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 21:07:27 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_UTILS_H
# define VEC4_UTILS_H

# include <math.h>
# include "vectors_types.h"
# include <stdbool.h>

static inline t_vec4	vec4_max(const t_vec4 a, const t_vec4 b)
{
	return (vec4(fmaxf(a.x, b.x), fmaxf(a.y, b.y),
			fmaxf(a.z, b.z), fmaxf(a.w, b.w)));
}

static inline t_vec4	vec4_min(const t_vec4 a, const t_vec4 b)
{
	return (vec4(fminf(a.x, b.x), fminf(a.y, b.y),
			fminf(a.z, b.z), fminf(a.w, b.w)));
}

static inline t_vec4	vec4_abs(t_vec4 v)
{
	return ((t_vec4){.x = fabsf(v.x), .y = fabsf(v.y), .z = fabsf(v.z), .w = fabsf(v.w)});
}

static inline float	vec4_comp_max(t_vec4 v)
{
	return (fmaxf(fmaxf(v.x, v.y), fmaxf(v.z, v.w)));
}

static inline bool	vec4_isfinite(t_vec4 v)
{
	return (isfinite(v.x) && isfinite(v.y) && isfinite(v.z) && isfinite(v.w));
}

#endif//VEC4_UTILS_H
