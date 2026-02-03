/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_constructors.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:14:50 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 13:31:55 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_CONSTRUCTORS_H
# define MAT3_CONSTRUCTORS_H

static inline t_mat3	mat3_zero(void)
{
	return ((t_mat3){.m = {
			{0.f, 0.f, 0.f},
			{0.f, 0.f, 0.f},
			{0.f, 0.f, 0.f}
		}});
}

static inline t_mat3	mat3_identity(void)
{
	return ((t_mat3){.m = {
			{1.f, 0.f, 0.f},
			{0.f, 1.f, 0.f},
			{0.f, 0.f, 1.f}
		}});
}

static inline t_mat3	mat3_from_rows(t_vec3 r0, t_vec3 r1, t_vec3 r2)
{
	return ((t_mat3){.m = {
			{r0.x, r0.y, r0.z},
			{r1.x, r1.y, r1.z},
			{r2.x, r2.y, r2.z}
		}});
}

static inline t_mat3	mat3_from_cols(t_vec3 c0, t_vec3 c1, t_vec3 c2)
{
	return ((t_mat3){.m = {
			{c0.x, c1.x, c2.x},
			{c0.y, c1.y, c2.y},
			{c0.z, c1.z, c2.z}
		}});
}

#endif//MAT3_CONSTRUCTORS_H
