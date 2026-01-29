/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3i_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:46:03 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:46:38 by jaubry--         ###   ########.fr       */
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

static inline t_vec3i	vec3i_abs(t_vec3i v)
{
	return ((t_vec3i){x = abs(v.x), y = abs(v.y), z = abs(v.z)});
}

static inline int	vec3i_comp_max(t_vec3i v)
{
	return (max(max(v.x, v.y), v.z));
}

#endif//VEC3I_UTILS_H
