/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_constructors.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:24:24 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 13:25:18 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_CONSTRUCTORS_H
# define VEC3_CONSTRUCTORS_H

# include <math.h>
# include "vectors_types.h"

static inline t_vec3	vec3(const float x, const float y, const float z)
{
	return ((t_vec3){{x, y, z}});
}

static inline t_vec3	vec3_set(const float v)
{
	return ((t_vec3){{v, v, v}});
}

#endif//VEC3_CONSTRUCTORS_H
