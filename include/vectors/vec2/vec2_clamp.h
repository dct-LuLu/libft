/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_clamp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:58:54 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 18:03:53 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_CLAMP_H
# define VEC2_CLAMP_H

# include "vectors_utils.h"

static inline t_vec2	vec2_clamp(const t_vec2 v, const float min,
						const float max)
{
	return ((t_vec2){{
			fclamp_branchless(v.x, min, max),
			fclamp_branchless(v.y, min, max)
		}});
}

#endif//VEC2_CLAMP_H
