/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:01:00 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 20:53:18 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_UTILS_H
# define VECTORS_UTILS_H

# include <math.h>
# include "math_utils.h"

static inline float	fclamp_branchless(const float val, const float mn,
						const float mx)
{
	return (fminf(fmaxf(val, mn), mx));
}

static inline int	clamp_branchless(const int val, const int mn,
						const int mx)
{
	return (min(max(val, mn), mx));
}

#endif//VECTORS_UTILS_H
