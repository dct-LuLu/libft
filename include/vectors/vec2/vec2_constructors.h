/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_constructors.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:26:55 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 13:24:09 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_CONSTRUCTORS_H
# define VEC2_CONSTRUCTORS_H

# include "vectors_types.h"

static inline t_vec2	vec2(const float x, const float y)
{
	return ((t_vec2){{x, y}});
}

static inline t_vec2	vec2_set(const float v)
{
	return ((t_vec2){{v, v}});
}

#endif//VEC2_CONSTRUCTORS_H
