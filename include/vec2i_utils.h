/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2i_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:44:59 by jaubry--          #+#    #+#             */
/*   Updated: 2025/12/23 18:51:52 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2I_UTILS_H
# define VEC2I_UTILS_H

# include "vectors_types.h"
# include "utils.h"

static inline t_vec2i	vec2i_max(const t_vec2i a, const t_vec2i b)
{
	return (vec2i(max(a.x, b.x), max(a.y, b.y)));
}

static inline t_vec2i	vec2i_min(const t_vec2i a, const t_vec2i b)
{
	return (vec2i(min(a.x, b.x), min(a.y, b.y)));
}

#endif//VEC2I_UTILS_H
