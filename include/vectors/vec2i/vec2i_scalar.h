/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2i_scalar.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 08:06:51 by jaubry--          #+#    #+#             */
/*   Updated: 2025/10/21 05:08:37 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2I_SCALAR_H
# define VEC2I_SCALAR_H

# include "vectors_types.h"

static inline t_vec2i	vec2i_scale(const t_vec2i v, const int s)
{
	return ((t_vec2i){{v.x * s, v.y * s}});
}

static inline t_vec2i	vec2i_add_scalar(const t_vec2i v, const int s)
{
	return ((t_vec2i){{v.x + s, v.y + s}});
}

static inline t_vec2i	vec2i_sub_scalar(const t_vec2i v, const int s)
{
	return ((t_vec2i){{v.x - s, v.y - s}});
}

static inline t_vec2i	vec2i_div_scalar(const t_vec2i v, const float s)
{
	return ((t_vec2i){{v.x / s, v.y / s}});
}

#endif
