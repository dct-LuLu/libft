/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors_conversion.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 06:52:43 by jaubry--          #+#    #+#             */
/*   Updated: 2025/10/21 07:02:55 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_CONVERSION_H
# define VECTORS_CONVERSION_H

# include "vectors.h"

static inline t_vec2	vec2_itof(const t_vec2i v)
{
	return ((t_vec2){{
			(float)v.x,
			(float)v.y
			}});
}

#endif// VECTORS_CONVERSION_H
