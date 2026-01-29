/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrices_types.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:21:58 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 21:59:48 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRICES_TYPES_H
# define MATRICES_TYPES_H

# include "vectors_types.h"

typedef struct s_mat3
{
	float	m[3][3];
}			t_mat3;

typedef t_vec2i	t_mat3_pivot;

#endif//MATRICES_TYPES_H
