/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:44:00 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:55:17 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_UTILS_H
# define VEC2_UTILS_H

# include <math.h>
# include "vectors_types.h"

static inline t_vec2	vec2_max(const t_vec2 a, const t_vec2 b)
{
	return (vec2(fmax(a.x, b.x), fmax(a.y, b.y)));
}

static inline t_vec2	vec2_min(const t_vec2 a, const t_vec2 b)
{
	return (vec2(fmin(a.x, b.x), fmin(a.y, b.y)));
}

static inline t_vec2	vec2_abs(t_vec2 v)
{
	return ((t_vec2){.x = fabsf(v.x), .y = fabsf(v.y)});
}

static inline float	vec2_comp_max(t_vec2 v)
{
	return (fmaxf(v.x, v.y));
}

static inline bool	vec2_isfinite(t_vec2 v)
{
	return (isfinite(v.x) && isfinite(v.y));
}

#endif//VEC2_UTILS_H
