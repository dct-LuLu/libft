/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_products.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:55:24 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/03 02:11:29 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_PRODUCTS_H
# define VEC3_PRODUCTS_H

# include "vectors_types.h"

static inline float	vec3_dot(const t_vec3 a, const t_vec3 b)
{
	return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
}

static inline t_vec3	vec3_cross(const t_vec3 a, const t_vec3 b)
{
	return ((t_vec3){{
			(a.y * b.z) - (a.z * b.y),
			(a.z * b.x) - (a.x * b.z),
			(a.x * b.y) - (a.y * b.x)
		}});
}

static inline float	vec3_pairwise(const t_vec3 v)
{
	return ((v.x * v.y) + (v.y * v.z) + (v.z * v.x));
}

#endif//VEC3_PRODUCTS_H
