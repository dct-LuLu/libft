/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_clamp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:05:19 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:40:41 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_CLAMP_H
# define VEC4_CLAMP_H

# include "vectors_utils.h"
# include "vectors_types.h"

static inline t_vec4	vec4_clamp(const t_vec4 v, const float min,
						const float max)
{
	return ((t_vec4){{
			fclamp_branchless(v.x, min, max),
			fclamp_branchless(v.y, min, max),
			fclamp_branchless(v.z, min, max),
			fclamp_branchless(v.w, min, max)
		}});
}

#endif//VEC4_CLAMP_H
