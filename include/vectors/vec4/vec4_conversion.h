/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_conversion.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:56:09 by jaubry--          #+#    #+#             */
/*   Updated: 2025/12/23 18:47:01 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_CONVERSION_H
# define VEC4_CONVERSION_H

# include <math.h>
# include "vectors.h"

static inline t_vec4	vec4_itof(const t_vec4i v)
{
	return ((t_vec4){{
			(float)v.x,
			(float)v.y,
			(float)v.z,
			(float)v.w
		}});
}

static inline t_vec4i	vec4_ftoi(const t_vec4 v)
{
	return ((t_vec4i){{
			v.x,
			v.y,
			v.z,
			v.w
		}});
}

static inline t_vec4i	vec4_ftoi_round(const t_vec4 v)
{
	return ((t_vec4i){{
			roundf(v.x),
			roundf(v.y),
			roundf(v.z),
			roundf(v.w)
		}});
}

#endif//VEC4_CONVERSION_H
