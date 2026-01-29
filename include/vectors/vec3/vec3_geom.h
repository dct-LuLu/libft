/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_geom.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:29:52 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:39:59 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_GEOM_H
# define VEC3_GEOM_H

# include "vectors_types.h"

static inline t_vec3	get_tangent(t_vec3 n)
{
	t_vec3	up;

	if (fabsf(n.y) > 0.999f)
		up = vec3(1, 0, 0);
	else
		up = vec3(0, 1, 0);
	return (vec3_normalize(vec3_cross(up, n)));
}

static inline t_vec3	get_bitangent(t_vec3 n, t_vec3 tangent)
{
	return (vec3_cross(n, tangent));
}

#endif//VEC3_GEOM_H
