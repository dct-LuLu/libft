/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_lerp.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:00:47 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:40:05 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_LERP_H
# define VEC3_LERP_H

# include "vectors_types.h"

static inline t_vec3	vec3_lerp(const t_vec3 a, const t_vec3 b, const float t)
{
	return ((t_vec3){{
			a.x * (1.0f - t) + b.x * t,
			a.y * (1.0f - t) + b.y * t,
			a.z * (1.0f - t) + b.z * t
		}});
}

#endif//VEC3_LERP_H
