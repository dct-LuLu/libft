/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_special.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:39:20 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:59:13 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_SPECIAL_H
# define VEC2_SPECIAL_H

# include <math.h>
# include "vectors_types.h"

static inline float	vec2_dot(const t_vec2 a, const t_vec2 b)
{
	return ((a.x * b.x) + (a.y * b.y));
}

static inline float	vec2_length2(const t_vec2 v)
{
	return ((v.x * v.x) + (v.y * v.y));
}

static inline float	vec2_length(const t_vec2 v)
{
	return (sqrtf(vec2_length2(v)));
}

static inline float	vec2_distance2(const t_vec2 a, const t_vec2 b)
{
	return (vec2_length2(vec2_sub(a, b)));
}

static inline float	vec2_distance(const t_vec2 a, const t_vec2 b)
{
	return (sqrtf(vec2_distance2(a, b)));
}

#endif// VEC2_SPECIAL_H
