/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_conversion.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:54:14 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:39:45 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_CONVERSION_H
# define VEC3_CONVERSION_H

# include <math.h>
# include "vectors_types.h"

static inline t_vec3	vec3_itof(const t_vec3i v)
{
	return ((t_vec3){{
			(float)v.x,
			(float)v.y,
			(float)v.z
		}});
}

static inline t_vec3i	vec3_ftoi(const t_vec3 v)
{
	return ((t_vec3i){{
			v.x,
			v.y,
			v.z
		}});
}

static inline t_vec3i	vec3_ftoi_round(const t_vec3 v)
{
	return ((t_vec3i){{
			roundf(v.x),
			roundf(v.y),
			roundf(v.z)
		}});
}

#endif//VEC3_CONVERSION_H
