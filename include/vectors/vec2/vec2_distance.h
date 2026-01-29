/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_distance.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:21:49 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:38:48 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_DISTANCE_H
# define VEC2_DISTANCE_H

# include "vectors_types.h"

static inline float	vec2_distance2(const t_vec2 a, const t_vec2 b)
{
	return (vec2_length2(vec2_sub(a, b)));
}

static inline float	vec2_distance(const t_vec2 a, const t_vec2 b)
{
	return (sqrtf(vec2_distance2(a, b)));
}

#endif//VEC2_DISTANCE_H
