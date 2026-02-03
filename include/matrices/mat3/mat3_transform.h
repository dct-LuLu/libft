/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_transform.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:23:11 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 19:16:13 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_TRANSFORM_H
# define MAT3_TRANSFORM_H

# include <math.h>
# include "matrices_types.h"

/*
	Matrix multiplication: returns A * B
	(composition of linear transforms, not component-wise multiply)
*/
static inline t_mat3	mat3_mul(const t_mat3 a, const t_mat3 b)
{
	return ((t_mat3){.m = {\
{\
a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[1][0] + a.m[0][2] * b.m[2][0], \
a.m[0][0] * b.m[0][1] + a.m[0][1] * b.m[1][1] + a.m[0][2] * b.m[2][1], \
a.m[0][0] * b.m[0][2] + a.m[0][1] * b.m[1][2] + a.m[0][2] * b.m[2][2]\
}, \
{\
a.m[1][0] * b.m[0][0] + a.m[1][1] * b.m[1][0] + a.m[1][2] * b.m[2][0], \
a.m[1][0] * b.m[0][1] + a.m[1][1] * b.m[1][1] + a.m[1][2] * b.m[2][1], \
a.m[1][0] * b.m[0][2] + a.m[1][1] * b.m[1][2] + a.m[1][2] * b.m[2][2]\
}, \
{\
a.m[2][0] * b.m[0][0] + a.m[2][1] * b.m[1][0] + a.m[2][2] * b.m[2][0], \
a.m[2][0] * b.m[0][1] + a.m[2][1] * b.m[1][1] + a.m[2][2] * b.m[2][1], \
a.m[2][0] * b.m[0][2] + a.m[2][1] * b.m[1][2] + a.m[2][2] * b.m[2][2]\
}\
}});
}

/*
	Matrix transpose: returns A^T
	(swaps rows/columns, so A^T[i][j] = A[j][i])
*/
static inline t_mat3	mat3_transpose(const t_mat3 a)
{
	return ((t_mat3){.m = {
			{a.m[0][0], a.m[1][0], a.m[2][0]},
			{a.m[0][1], a.m[1][1], a.m[2][1]},
			{a.m[0][2], a.m[1][2], a.m[2][2]}
		}});
}

/*
	Trace of a 3x3: tr(A) = A00 + A11 + A22
	(sum of diagonal)
*/
static inline float	mat3_trace(const t_mat3 a)
{
	return (a.m[0][0] + a.m[1][1] + a.m[2][2]);
}

/*
	Determinant of a 3x3: det(A)
	(signed volume scale factor; zero means “not invertible”)
*/
static inline float	mat3_det(const t_mat3 a)
{
	return (
		a.m[0][0] * (a.m[1][1] * a.m[2][2] - a.m[1][2] * a.m[2][1])
		- a.m[0][1] * (a.m[1][0] * a.m[2][2] - a.m[1][2] * a.m[2][0])
		+ a.m[0][2] * (a.m[1][0] * a.m[2][1] - a.m[1][1] * a.m[2][0])
	);
}

/*
	Matrix inverse: returns A^{-1} when det(A) != 0,
	else returns the zero matrix as a safe fallback.
*/
static inline t_mat3	mat3_inverse(const t_mat3 a)
{
	const float	det = mat3_det(a);
	t_mat3		r;

	if ((det == 0.0f) || !isfinite(det))
		return (mat3_zero());
	r.m[0][0] = ((a.m[1][1] * a.m[2][2]) - (a.m[1][2] * a.m[2][1])) / det;
	r.m[0][1] = -((a.m[0][1] * a.m[2][2]) - (a.m[0][2] * a.m[2][1])) / det;
	r.m[0][2] = ((a.m[0][1] * a.m[1][2]) - (a.m[0][2] * a.m[1][1])) / det;
	r.m[1][0] = -((a.m[1][0] * a.m[2][2]) - (a.m[1][2] * a.m[2][0])) / det;
	r.m[1][1] = ((a.m[0][0] * a.m[2][2]) - (a.m[0][2] * a.m[2][0])) / det;
	r.m[1][2] = -((a.m[0][0] * a.m[1][2]) - (a.m[0][2] * a.m[1][0])) / det;
	r.m[2][0] = ((a.m[1][0] * a.m[2][1]) - (a.m[1][1] * a.m[2][0])) / det;
	r.m[2][1] = -((a.m[0][0] * a.m[2][1]) - (a.m[0][1] * a.m[2][0])) / det;
	r.m[2][2] = ((a.m[0][0] * a.m[1][1]) - (a.m[0][1] * a.m[1][0])) / det;
	return (r);
}

#endif//MAT3_TRANSFORM_H
