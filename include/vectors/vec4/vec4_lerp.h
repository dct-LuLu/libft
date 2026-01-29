/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_lerp.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:23:49 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:40:59 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_LERP_H
# define VEC4_LERP_H

# include "vectors_types.h"

static inline t_vec4	vec4_lerp(const t_vec4 a, const t_vec4 b, const float t)
{
	return ((t_vec4){{
			a.x * (1.0f - t) + b.x * t,
			a.y * (1.0f - t) + b.y * t,
			a.z * (1.0f - t) + b.z * t,
			a.w * (1.0f - t) + b.w * t
		}});
}

#endif//VEC4_LERP_H
