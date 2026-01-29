/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3i_constructors.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyonr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:30:05 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:38:32 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3I_CONSTRUCTORS_H
# define VEC3I_CONSTRUCTORS_H

# include "vectors_types.h"

static inline t_vec3i	vec3i(const int x, const int y, const int z)
{
	return ((t_vec3i){{x, y, z}});
}

static inline t_vec3i	vec3i_zero(void)
{
	return ((t_vec3i){{0, 0, 0}});
}

static inline t_vec3i	vec3i_err(void)
{
	return ((t_vec3i){{-1, -1, -1}});
}

static inline t_vec3i	vec3i_set(const int v)
{
	return ((t_vec3i){{v, v, v}});
}

#endif//VEC3I_CONSTRUCTORS_H
