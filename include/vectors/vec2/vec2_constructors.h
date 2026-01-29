/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_constructors.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:26:55 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:38:18 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_CONSTRUCTORS_H
# define VEC2_CONSTRUCTORS_H

# include "vectors_types.h"

static inline t_vec2	vec2(const float x, const float y)
{
	return ((t_vec2){{x, y}});
}

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

static inline t_vec2	vec2_set(const float v)
{
	return ((t_vec2){{v, v}});
}

#endif//VEC2_CONSTRUCTORS_H
