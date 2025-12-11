/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_conversion.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:28:56 by jaubry--          #+#    #+#             */
/*   Updated: 2025/10/21 00:20:01 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_CONVER_H
# define COLORS_CONVER_H

# include "colors.h"

static inline t_rgb_int	ft_blend_colors(t_rgb_int mlx, t_rgba_int src)
{
	t_rgb_int	dst;
	int			alpha_f;

	alpha_f = 0xFF - src.a;
	dst.r = ((src.r * src.a) + (mlx.r * alpha_f)) / 0xFF;
	dst.g = ((src.g * src.a) + (mlx.g * alpha_f)) / 0xFF;
	dst.b = ((src.b * src.a) + (mlx.b * alpha_f)) / 0xFF;
	return (dst);
}

static inline t_rgb_int	ft_blend_raw_colors(uint32_t _mlx, t_rgba_int src)
{
	const t_rgb_int	mlx = (t_rgb_int){.rgb=_mlx};
	t_rgb_int		dst;
	int				alpha_f;

	alpha_f = 0xFF - src.a;
	dst.r = ((src.r * src.a) + (mlx.r * alpha_f)) / 0xFF;
	dst.g = ((src.g * src.a) + (mlx.g * alpha_f)) / 0xFF;
	dst.b = ((src.b * src.a) + (mlx.b * alpha_f)) / 0xFF;
	return (dst);
}

#endif//COLORS_CONVER_H
