/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_constructors.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:32:00 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:56:41 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUAT_CONSTRUCTORS_H
# define QUAT_CONSTRUCTORS_H

# include "vectors_types.h"

static inline t_quat	quat_identity(void)
{
	return ((t_quat){{.x = 0.f, .y = 0.f, .z = 0.f, .w = 1.f}});
}

#endif//QUAT_CONSTRUCTORS_H
