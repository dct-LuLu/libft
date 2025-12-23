/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_conversion.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 06:52:43 by jaubry--          #+#    #+#             */
/*   Updated: 2025/12/23 18:44:17 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_CONVERSION_H
# define VEC2_CONVERSION_H

# include <math.h>
# include "vectors.h"

static inline t_vec2	vec2_itof(const t_vec2i v)
{
	return ((t_vec2){{
			(float)v.x,
			(float)v.y
		}});
}

static inline t_vec2i	vec2_ftoi(const t_vec2 v)
{
	return ((t_vec2i){{
			v.x,
			v.y
		}});
}

static inline t_vec2i	vec2_ftoi_round(const t_vec2 v)
{
	return ((t_vec2i){{
			roundf(v.x),
			roundf(v.y)
		}});
}

#endif// VEC2_CONVERSION_H
