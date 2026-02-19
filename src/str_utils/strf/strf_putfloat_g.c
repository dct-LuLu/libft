/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strf_putfloat_g.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 05:23:21 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/19 15:46:24 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strf_putfloat_raw(char *output, size_t len, double nb,
			size_t precision);

static size_t	strf_trim_zeros(char *output, size_t write_len)
{
	size_t	i;
	size_t	dot_pos;

	dot_pos = 0;
	i = 0;
	while (i < write_len)
	{
		if (output[i] == '.')
			dot_pos = i;
		i++;
	}
	if (dot_pos == 0)
		return (write_len);
	while ((write_len > dot_pos + 1) && (output[write_len - 1] == '0'))
		write_len--;
	if (output[write_len - 1] == '.')
		write_len--;
	return (write_len);
}

size_t	strf_putfloat_g(char *output, size_t len, double nb, size_t precision)
{
	size_t	write_len;

	write_len = strf_putfloat_raw(output, len, nb, precision);
	return (strf_trim_zeros(output, write_len));
}
