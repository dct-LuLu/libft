/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_vec3.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:24:12 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 22:24:42 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_VEC3_H
# define MAT3_VEC3_H

# include "matrices_types.h"
# include "vec3_constructors.h"

/*
	v' = M * v
*/
static inline t_vec3	mat3_mul_vec3(const t_mat3 m, const t_vec3 v)
{
	return (vec3(
		m.m[0][0] * v.x + m.m[0][1] * v.y + m.m[0][2] * v.z,
		m.m[1][0] * v.x + m.m[1][1] * v.y + m.m[1][2] * v.z,
		m.m[2][0] * v.x + m.m[2][1] * v.y + m.m[2][2] * v.z
	));
}

/*
	v' = M^T * v
*/
static inline t_vec3	mat3_mul_vec3_t(const t_mat3 m, const t_vec3 v)
{
	return (vec3(
		m.m[0][0] * v.x + m.m[1][0] * v.y + m.m[2][0] * v.z,
		m.m[0][1] * v.x + m.m[1][1] * v.y + m.m[2][1] * v.z,
		m.m[0][2] * v.x + m.m[1][2] * v.y + m.m[2][2] * v.z
	));
}

#endif//MAT3_VEC3_H
