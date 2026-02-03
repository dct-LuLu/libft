/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_sconstructors.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:23:36 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 13:24:01 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_SCONSTRUCTORS_H
# define VEC2_SCONSTRUCTORS_H

# include "vectors_types.h"

static inline t_vec2	vec2_zero(void)
{
	return ((t_vec2){{0.f, 0.f}});
}

static inline t_vec2	vec2_pinf(void)
{
	return ((t_vec2){{INFINITY, INFINITY}});
}

static inline t_vec2	vec2_ninf(void)
{
	return ((t_vec2){{-INFINITY, -INFINITY}});
}

static inline t_vec2	vec2_err(void)
{
	return ((t_vec2){{-1.f, -1.f}});
}

#endif//VEC2_SCONSTRUCTORS_H
