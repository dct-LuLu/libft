/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:01:00 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 18:02:13 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_UTILS_H
# define VECTORS_UTILS_H

static inline float	fclamp_branchless(const float val, const float min,
						const float max)
{
	return (fminf(fmaxf(val, min), max));
}

static inline int	clamp_branchless(const int val, const int min,
						const int max)
{
	return (min(max(val, min), max));
}

#endif//VECTORS_UTILS_H
