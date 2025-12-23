/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:16:47 by jaubry--          #+#    #+#             */
/*   Updated: 2025/12/23 18:43:34 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "libft.h"

/* -------------------------------------------------------------------------- */
/*                                   Utils                                    */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Time utils ------------------------------- */

ssize_t	get_current_time(void);

/* ------------------------------- Math utils ------------------------------- */

int		min(int a, int b);
int		max(int a, int b);

/* ---------------------- Quadratic bezier curve utils ---------------------- */

t_vec2i	quad_bezier_pt(const t_vec2i start, const t_vec2i ctrl,
			const t_vec2i end, const float t);

float	quad_bezier_res(const t_vec2i start, const t_vec2i ctrl,
			const t_vec2i end);

float	quad_curve_length(const t_vec2i start, const t_vec2i ctrl,
			const t_vec2i end);

#endif//UTILS_H
