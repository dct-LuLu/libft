/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:49:57 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:49:30 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_UTILS_H
# define VEC3_UTILS_H

# include <math.h>
# include "vectors_types.h"

static inline t_vec3	vec3_max(const t_vec3 a, const t_vec3 b)
{
	return (vec3(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z)));
}

static inline t_vec3	vec3_min(const t_vec3 a, const t_vec3 b)
{
	return (vec3(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z)));
}

static inline t_vec3	vec3_abs(t_vec3 v)
{
	return ((t_vec3){x = fabsf(v.x), y = fabsf(v.y), z = fabsf(v.z)});
}

static inline float	vec3_comp_max(t_vec3 v)
{
	return (fmaxf(fmaxf(v.x, v.y), v.z));
}

static inline bool	vec3_isfinite(t_vec3 v)
{
	return (isfinite(v.x) && isfinite(v.y) && isfinite(v.z));
}

#endif//VEC3_UTILS_H
