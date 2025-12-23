/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_init.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:49:46 by jaubry--          #+#    #+#             */
/*   Updated: 2025/12/23 18:55:27 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_INIT_H
# define COLORS_INIT_H

# include "colors.h"

static inline t_rgb_int	drgb_int(const uint32_t rgb)
{
	return ((t_rgb_int){.rgb = rgb});
}

static inline t_rgba_int	drgba_int(const uint32_t rgba)
{
	return ((t_rgba_int){.rgba = rgba});
}

#endif//COLORS_INIT_H
