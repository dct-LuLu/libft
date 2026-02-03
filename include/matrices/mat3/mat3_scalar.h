/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_scalar.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:22:47 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/03 01:05:42 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_SCALAR_H
# define MAT3_SCALAR_H

# include "matrices_types.h"

/*
	Scalar multiplication of a matrix: returns s * A
	(scales every coefficient by the same float)
*/
static inline t_mat3	mat3_scale(const t_mat3 a, const float s)
{
	return ((t_mat3){.m = {\
{a.m[0][0] * s, a.m[0][1] * s, a.m[0][2] * s}, \
{a.m[1][0] * s, a.m[1][1] * s, a.m[1][2] * s}, \
{a.m[2][0] * s, a.m[2][1] * s, a.m[2][2] * s}\
}});
}

/*
	Adds a scalar to every coefficient: returns A + s
	(component-wise add, not a geometric transform)
*/
static inline t_mat3	mat3_add_scalar(const t_mat3 a, const float s)
{
	return ((t_mat3){.m = {\
{a.m[0][0] + s, a.m[0][1] + s, a.m[0][2] + s}, \
{a.m[1][0] + s, a.m[1][1] + s, a.m[1][2] + s}, \
{a.m[2][0] + s, a.m[2][1] + s, a.m[2][2] + s}\
}});
}

/*
	Subtracts a scalar from every coefficient: returns A - s
	(component-wise subtract)
*/
static inline t_mat3	mat3_sub_scalar(const t_mat3 a, const float s)
{
	return ((t_mat3){.m = {\
{a.m[0][0] - s, a.m[0][1] - s, a.m[0][2] - s}, \
{a.m[1][0] - s, a.m[1][1] - s, a.m[1][2] - s}, \
{a.m[2][0] - s, a.m[2][1] - s, a.m[2][2] - s}\
}});
}

/*
	Scalar division of a matrix: returns A / s
	(component-wise divide by the same float)
*/
static inline t_mat3	mat3_div_scalar(const t_mat3 a, const float s)
{
	return ((t_mat3){.m = {\
{a.m[0][0] / s, a.m[0][1] / s, a.m[0][2] / s}, \
{a.m[1][0] / s, a.m[1][1] / s, a.m[1][2] / s}, \
{a.m[2][0] / s, a.m[2][1] / s, a.m[2][2] / s}\
}});
}

#endif//MAT3_SCALAR_H
