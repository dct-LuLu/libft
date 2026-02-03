/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_sconstructors.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:24:51 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 13:25:13 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_SCONSTRUCTORS_H
# define VEC3_SCONSTRUCTORS_H

# include <math.h>
# include "vectors_types.h"

static inline t_vec3	vec3_zero(void)
{
	return ((t_vec3){{0.f, 0.f, 0.f}});
}

static inline t_vec3	vec3_pinf(void)
{
	return ((t_vec3){{INFINITY, INFINITY, INFINITY}});
}

static inline t_vec3	vec3_ninf(void)
{
	return ((t_vec3){{-INFINITY, -INFINITY, -INFINITY}});
}

static inline t_vec3	vec3_err(void)
{
	return ((t_vec3){{-1.f, -1.f, -1.f}});
}

#endif//VEC3_SCONSTRUCTORS_H
