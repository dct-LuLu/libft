/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_products.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:14:58 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:41:09 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_PRODUCTS_H
# define VEC4_PRODUCTS_H

# include "vectors_types.h"

static inline float	vec4_dot(const t_vec4 a, const t_vec4 b)
{
	return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w));
}

#endif//VEC4_PRODUCTS_H
