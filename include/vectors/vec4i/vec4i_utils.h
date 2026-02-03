/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4i_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:47:42 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 13:27:59 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4I_UTILS_H
# define VEC4I_UTILS_H

# include "vectors_types.h"
# include "math_utils.h"
# include <stdbool.h>

static inline t_vec4i	vec4i_max(const t_vec4i a, const t_vec4i b)
{
	return (vec4i(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z), max(a.w, b.w)));
}

static inline t_vec4i	vec4i_min(const t_vec4i a, const t_vec4i b)
{
	return (vec4i(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z), min(a.w, b.w)));
}

static inline t_vec4i	vec4i_abs(t_vec4i v)
{
	return ((t_vec4i){.x = abs(v.x), .y = abs(v.y),
		.z = abs(v.z), .w = abs(v.w)});
}

static inline int	vec4i_comp_max(t_vec4i v)
{
	return (max(max(v.x, v.y), max(v.z, v.w)));
}

#endif//VEC4I_UTILSL_H
