/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_accessors.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:20:10 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 23:19:21 by jaubry--         ###   ########.fr       */
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

#endif//MAT3_ACCESSORS_H
