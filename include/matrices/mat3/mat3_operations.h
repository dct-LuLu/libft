/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_operations.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:50:43 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 22:22:30 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_OPERATIONS_H
# define MAT3_OPERATIONS_H

# include "matrices_types.h"
# include "vec3_constructors.h"

static inline t_mat3	mat3_add(const t_mat3 a, const t_mat3 b)
{
	return ((t_mat3){.m = {
		{a.m[0][0] + b.m[0][0], a.m[0][1] + b.m[0][1], a.m[0][2] + b.m[0][2]},
		{a.m[1][0] + b.m[1][0], a.m[1][1] + b.m[1][1], a.m[1][2] + b.m[1][2]},
		{a.m[2][0] + b.m[2][0], a.m[2][1] + b.m[2][1], a.m[2][2] + b.m[2][2]}
	}});
}

static inline t_mat3	mat3_sub(const t_mat3 a, const t_mat3 b)
{
	return ((t_mat3){.m = {
		{a.m[0][0] - b.m[0][0], a.m[0][1] - b.m[0][1], a.m[0][2] - b.m[0][2]},
		{a.m[1][0] - b.m[1][0], a.m[1][1] - b.m[1][1], a.m[1][2] - b.m[1][2]},
		{a.m[2][0] - b.m[2][0], a.m[2][1] - b.m[2][1], a.m[2][2] - b.m[2][2]}
	}});
}

static inline t_mat3	mat3_mult(const t_mat3 a, const t_mat3 b)
{
	return ((t_mat3){.m = {
		{a.m[0][0] * b.m[0][0], a.m[0][1] * b.m[0][1], a.m[0][2] * b.m[0][2]},
		{a.m[1][0] * b.m[1][0], a.m[1][1] * b.m[1][1], a.m[1][2] * b.m[1][2]},
		{a.m[2][0] * b.m[2][0], a.m[2][1] * b.m[2][1], a.m[2][2] * b.m[2][2]}
	}});
}

static inline t_mat3	mat3_div(const t_mat3 a, const t_mat3 b)
{
	return ((t_mat3){.m = {
		{a.m[0][0] / b.m[0][0], a.m[0][1] / b.m[0][1], a.m[0][2] / b.m[0][2]},
		{a.m[1][0] / b.m[1][0], a.m[1][1] / b.m[1][1], a.m[1][2] / b.m[1][2]},
		{a.m[2][0] / b.m[2][0], a.m[2][1] / b.m[2][1], a.m[2][2] / b.m[2][2]}
	}});
}

#endif//MAT3_OPERATIONS_H
