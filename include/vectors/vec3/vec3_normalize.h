/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_normalize.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:02:06 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 21:02:08 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_NORMALIZE_H
# define VEC3_NORMALIZE_H

# include "vectors_types.h"
# include "vec3_length.h"
# include "vec3_scalar.h"
# include "vec3_constructors.h"
# include "vec3_utils.h"

/*
	Normalize with zero-check to avoid division by zero
	Returns original vector if length is zero for safety
*/
static inline t_vec3	vec3_normalize(const t_vec3 v)
{
	const float	len = vec3_length(v);

	if (len == 0.0f)
		return (vec3_zero());
	return (vec3_div_scalar(v, len));
}

static inline t_vec3	vec3_normalize_safe(const t_vec3 v)
{
	float	len;

	if (!vec3_isfinite(v))
		return (vec3_zero());
	len = vec3_length_safe(v);
	if (!(len > 0.0f) || !isfinite(len))
		return (vec3_zero());
	return (vec3_div_scalar(v, len));
}

#endif//VEC3_NORMALIZE_H
