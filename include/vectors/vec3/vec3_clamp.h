/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_clamp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:03:25 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 18:03:49 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_CLAMP_H
# define VEC3_CLAMP_H

# include "vectors_utils.h"

static inline t_vec3	vec3_clamp(const t_vec3 v, const float min,
						const float max)
{
	return ((t_vec3){{
			fclamp_branchless(v.x, min, max),
			fclamp_branchless(v.y, min, max),
			fclamp_branchless(v.z, min, max)
		}});
}

#endif//VEC3_CLAMP_H
