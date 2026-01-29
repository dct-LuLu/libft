/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:05:42 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 21:06:52 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_UTILS_H
# define MATH_UTILS_H

static inline int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

static inline int	max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif//MATH_UTILS_H
