/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2i_clamp.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:02:33 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:39:22 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2I_CLAMP_H
# define VEC2I_CLAMP_H

# include "vectors_utils.h"
# include "vectors_types.h"

static inline t_vec2i	vec2i_clamp(const t_vec2i v, const int min,
						const int max)
{
	return ((t_vec2i){{
			clamp_branchless(v.x, min, max),
			clamp_branchless(v.y, min, max)
		}});
}

#endif//VEC2I_CLAMP_H
