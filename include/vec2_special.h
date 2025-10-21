/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_special.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:39:20 by jaubry--          #+#    #+#             */
/*   Updated: 2025/10/21 00:41:50 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_SPECIAL_H
# define VEC2_SPECIAL_H

# include <math.h>
# include "vectors_types.h"

static inline float	vec2_len2(const t_vec2 v)
{
	return (v.x * v.x + v.y * v.y);
}

static inline float	vec2_len(const t_vec2 v)
{
	return (sqrtf(vec2_len2(v)));
}

static inline float	vec2_dist2(const t_vec2 a, const t_vec2 b)
{
	const t_vec2	d = vec2_sub(a, b);

	return (vec2_len2(d));
}

static inline float	vec2_dist(const t_vec2 a, const t_vec2 b)
{
	return (sqrtf(vec2_dist2(a, b)));
}

#endif// VEC2_SPECIAL_H
