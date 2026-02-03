/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_sconstructors.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:26:07 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 13:26:20 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_SCONSTRUCTORS_H
# define VEC4_SCONSTRUCTORS_H

# include "vectors_types.h"

static inline t_vec4	vec4_zero(void)
{
	return ((t_vec4){{0.f, 0.f, 0.f, 0.f}});
}

static inline t_vec4	vec4_pinf(void)
{
	return ((t_vec4){{INFINITY, INFINITY, INFINITY, INFINITY}});
}

static inline t_vec4	vec4_ninf(void)
{
	return ((t_vec4){{-INFINITY, -INFINITY, -INFINITY, -INFINITY}});
}

static inline t_vec4	vec4_err(void)
{
	return ((t_vec4){{-1.f, -1.f, -1.f, -1.f}});
}

#endif//VEC4_SCONSTRUCTORS_H
