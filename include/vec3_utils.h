/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:49:57 by jaubry--          #+#    #+#             */
/*   Updated: 2025/12/23 18:46:21 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_UTILS_H
# define VEC3_UTILS_H

# include <math.h>
# include "vectors_types.h"

static inline t_vec3	vec3_max(const t_vec3 a, const t_vec3 b)
{
	return (vec3(fmax(a.x, b.x), fmax(a.y, b.y), fmax(a.z, b.z)));
}

static inline t_vec3	vec3_min(const t_vec3 a, const t_vec3 b)
{
	return (vec3(fmin(a.x, b.x), fmin(a.y, b.y), fmin(a.z, b.z)));
}

#endif//VEC3_UTILS_H
