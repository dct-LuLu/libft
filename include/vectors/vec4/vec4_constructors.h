/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_constructors.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:31:15 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:41:34 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_CONSTRUCTORS_H
# define VEC4_CONSTRUCTORS_H

static inline t_vec4	vec4(const float x, const float y, const float z, const float w)
{
	return ((t_vec4){{x, y, z, w}});
}

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

static inline t_vec4	vec4_set(const float v)
{
	return ((t_vec4){{v, v, v, v}});
}

static inline t_vec4	vec4_identity(void)
{
	return ((t_vec4){{.x = 0.f, .y = 0.f, .z = 0.f, .w = 1.f}});
}

#endif//VEC4_CONSTRUCTORS_H
