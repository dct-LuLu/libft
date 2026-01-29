/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4i_clamp.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:06:03 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 18:06:49 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4I_CLAMP_H
# define VEC4I_CLAMP_H

# include "vectors_utils.h"

static inline t_vec4i	vec4i_clamp(const t_vec4i v, const int min,
						const int max)
{
	return ((t_vec4i){{
			clamp_branchless(v.x, min, max),
			clamp_branchless(v.y, min, max),
			clamp_branchless(v.z, min, max),
			clamp_branchless(v.w, min, max)
		}});
}

#endif//VEC4I_CLAMP_H
