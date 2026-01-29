/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2i_constructors.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyonr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:28:45 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 16:38:23 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2I_CONSTRUCTORS_H
# define VEC2I_CONSTRUCTORS_H

# include "vectors_types.h"

static inline t_vec2i	vec2i(const int x, const int y)
{
	return ((t_vec2i){{x, y}});
}

static inline t_vec2i	vec2i_zero(void)
{
	return ((t_vec2i){{0, 0}});
}

static inline t_vec2i	vec2i_err(void)
{
	return ((t_vec2i){{-1, -1}});
}

static inline t_vec2i	vec2i_set(const int v)
{
	return ((t_vec2i){{v, v}});
}

#endif//VEC2I_CONSTRUCTORS_H
