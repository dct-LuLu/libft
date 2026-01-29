/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_lerp.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:59:45 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:38:58 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_LERP_H
# define VEC2_LERP_H

# include "vectors_types.h"

static inline t_vec2	vec2_lerp(const t_vec2 a, const t_vec2 b, const float t)
{
	return ((t_vec2){{
			a.x * (1.0f - t) + b.x * t,
			a.y * (1.0f - t) + b.y * t
		}});
}

#endif//VEC2_LERP_H
