/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3i_clamp.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:04:24 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 18:04:53 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3I_CLAMP_H
# define VEC3I_CLAMP_H

# include "vectors_utils.h"

static inline t_vec3i	vec3i_clamp(const t_vec3i v, const float min,
						const float max)
{
	return ((t_vec3i){{
			clamp_branchless(v.x, min, max),
			clamp_branchless(v.y, min, max),
			clamp_branchless(v.z, min, max)
		}});
}

#endif//VEC3I_CLAMP_H
