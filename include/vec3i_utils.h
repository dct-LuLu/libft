/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3i_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:46:03 by jaubry--          #+#    #+#             */
/*   Updated: 2025/12/23 18:46:48 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3I_UTILS_H
# define VEC3I_UTILS_H

# include "vectors_types.h"
# include "utils.h"

static inline t_vec3i	vec3i_max(const t_vec3i a, const t_vec3i b)
{
	return (vec3i(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z)));
}

static inline t_vec3i	vec3i_min(const t_vec3i a, const t_vec3i b)
{
	return (vec3i(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z)));
}

#endif//VEC3I_UTILS_H
