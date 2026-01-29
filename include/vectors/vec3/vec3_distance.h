/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_distance.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:35:44 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:39:56 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_DISTANCE_H
# define VEC3_DISTANCE_H

# include "vectors_types.h"

static inline float	vec3_distance2(const t_vec3 a, const t_vec3 b)
{
	return (vec3_length2(vec3_sub(a, b)));
}

static inline float	vec3_distance(const t_vec3 a, const t_vec3 b)
{
	return (sqrtf(vec3_distance2(a, b)));
}

#endif//VEC3_DISTANCE_H
