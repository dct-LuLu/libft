/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2i_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:44:59 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/30 13:03:47 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2I_UTILS_H
# define VEC2I_UTILS_H

# include "vectors_types.h"
# include "math_utils.h"
# include <stdlib.h>
# include <stdbool.h>

static inline t_vec2i	vec2i_max(const t_vec2i a, const t_vec2i b)
{
	return (vec2i(max(a.x, b.x), max(a.y, b.y)));
}

static inline t_vec2i	vec2i_min(const t_vec2i a, const t_vec2i b)
{
	return (vec2i(min(a.x, b.x), min(a.y, b.y)));
}

static inline t_vec2i	vec2i_abs(t_vec2i v)
{
	return ((t_vec2i){.x = abs(v.x), .y = abs(v.y)});
}

static inline int	vec2i_comp_max(t_vec2i v)
{
	return (max(v.x, v.y));
}

#endif//VEC2I_UTILS_H
