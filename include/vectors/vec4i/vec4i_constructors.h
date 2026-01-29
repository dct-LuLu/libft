/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4i_constructors.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:34:05 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:39:16 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4I_CONSTRUCTORS_H
# define VEC4I_CONSTRUCTORS_H

static inline t_vec4i	vec4i(const int x, const int y, const int z, const int w)
{
	return ((t_vec4i){{x, y, z, w}});
}

static inline t_vec4i	vec4i_zero(void)
{
	return ((t_vec4i){{0, 0, 0, 0}});
}

static inline t_vec4i	vec4i_err(void)
{
	return ((t_vec4i){{-1, -1, -1, -1}});
}

static inline t_vec4i	vec4i_set(const int v)
{
	return ((t_vec4i){{v, v, v, v}});
}

#endif//VEC4I_CONSTRUCTORS_H
