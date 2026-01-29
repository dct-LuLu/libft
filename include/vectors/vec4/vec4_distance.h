/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_distance.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:36:32 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:36:53 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_DISTANCE_H
# define VEC4_DISTANCE_H

static inline float	vec4_distance2(const t_vec4 a, const t_vec4 b)
{
	return (vec4_length2(vec4_sub(a, b)));
}

static inline float	vec4_distance(const t_vec4 a, const t_vec4 b)
{
	return (sqrtf(vec4_distance2(a, b)));
}

#endif//VEC4_DISTANCE_H
