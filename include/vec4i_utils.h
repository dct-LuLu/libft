/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4i_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:47:42 by jaubry--          #+#    #+#             */
/*   Updated: 2025/10/27 12:00:06 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4I_SPECIAL_H
# define VEC4I_SPECIAL_H

# include "vectors_types.h"
# include "utils.h"

static inline t_vec4i vec4i_max(const t_vec4i a, const t_vec4i b)
{
	return (vec4i(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z), max(a.w, b.w)));
}

static inline t_vec4i vec4i_min(const t_vec4i a, const t_vec4i b)
{
	return (vec4i(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z), min(a.w, b.w)));
}

#endif//VEC4I_SPECIAL_H
