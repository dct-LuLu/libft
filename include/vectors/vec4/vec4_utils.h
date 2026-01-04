/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:51:05 by jaubry--          #+#    #+#             */
/*   Updated: 2025/12/23 18:56:11 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_UTILS_H
# define VEC4_UTILS_H

# include <math.h>
# include "vectors_types.h"

static inline t_vec4	vec4_max(const t_vec4 a, const t_vec4 b)
{
	return (vec4(fmax(a.x, b.x), fmax(a.y, b.y),
			fmax(a.z, b.z), fmax(a.w, b.w)));
}

static inline t_vec4	vec4_min(const t_vec4 a, const t_vec4 b)
{
	return (vec4(fmin(a.x, b.x), fmin(a.y, b.y),
			fmin(a.z, b.z), fmin(a.w, b.w)));
}

#endif//VEC4_UTILS_H
