/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2i_special.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:42:14 by jaubry--          #+#    #+#             */
/*   Updated: 2025/10/21 00:45:49 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2I_SPECIAL_H
# define VEC2I_SPECIAL_H

# include <math.h>
# include "vectors_types.h"

static inline float	vec2i_len2(const t_vec2i v)
{
	return ((float)(v.x * v.x + v.y * v.y));
}

static inline float	vec2i_len(const t_vec2i v)
{
	return (sqrtf(vec2i_len2(v)));
}

static inline float	vec2i_dist2(const t_vec2i a, const t_vec2i b)
{
	const t_vec2i	d = vec2i_sub(a, b);

	return (vec2i_len2(d));
}

static inline float	vec2i_dist(const t_vec2i a, const t_vec2i b)
{
	return (sqrtf(vec2i_dist2(a, b)));
}

#endif// VEC2I_SPECIAL_H
