/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_accessors.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:20:10 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 18:41:32 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_ACCESSORS_H
# define MAT3_ACCESSORS_H

# include "matrices_types.h"
# include "vec3_constructors.h"

static inline t_vec3	mat3_get_row(const t_mat3 m, const int r)
{
	if (r == 0)
		return (vec3(m.m[0][0], m.m[0][1], m.m[0][2]));
	else if (r == 1)
		return (vec3(m.m[1][0], m.m[1][1], m.m[1][2]));
	return (vec3(m.m[2][0], m.m[2][1], m.m[2][2]));
}

static inline t_vec3	mat3_get_col(const t_mat3 m, const int c)
{
	if (c == 0)
		return (vec3(m.m[0][0], m.m[1][0], m.m[2][0]));
	else if (c == 1)
		return (vec3(m.m[0][1], m.m[1][1], m.m[2][1]));
	return (vec3(m.m[0][2], m.m[1][2], m.m[2][2]));
}

static inline void	mat3_set_sym(t_mat3 *m, const int i, const int j,
	const float v)
{
	m->m[i][j] = v;
	m->m[j][i] = v;
}

static inline void	mat3_set_row(t_mat3 *m, const int r, const t_vec3 v)
{
	m->m[r][0] = v.x;
	m->m[r][1] = v.y;
	m->m[r][2] = v.z;
}

static inline void	mat3_set_col(t_mat3 *m, const int c, const t_vec3 v)
{
	m->m[0][c] = v.x;
	m->m[1][c] = v.y;
	m->m[2][c] = v.z;
}

#endif//MAT3_ACCESSORS_H
