/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:44:00 by jaubry--          #+#    #+#             */
/*   Updated: 2025/10/27 11:44:45 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_UTILS_H
# define VEC2_UTILS_H

# include <math.h>
# include "vectors_types.h"

static inline t_vec2 vec2_max(const t_vec2 a, const t_vec2 b)
{
	return (vec2(fmax(a.x, b.x), fmax(a.y, b.y)));
}

static inline t_vec2 vec2_min(const t_vec2 a, const t_vec2 b)
{
	return (vec2(fmin(a.x, b.x), fmin(a.y, b.y)));
}

#endif//VEC2_UTILS_H
