/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strf_putfloat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 05:10:58 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/15 05:27:01 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strf_putfloat_frac(char *output, size_t len,
		double frac, size_t precision)
{
	size_t			write_len;
	unsigned long	digit;

	write_len = 0;
	while ((precision > 0) && (len > 0))
	{
		frac *= 10;
		digit = (unsigned long)frac;
		output[write_len] = digit + '0';
		frac -= digit;
		write_len++;
		len--;
		precision--;
	}
	return (write_len);
}

static double	strf_round_float(double nb, size_t precision)
{
	double	rounder;
	size_t	i;

	rounder = 0.5;
	i = 0;
	while (i < precision)
	{
		rounder /= 10;
		i++;
	}
	if (nb >= 0)
		return (nb + rounder);
	return (nb - rounder);
}

size_t	strf_putfloat_raw(char *output, size_t len, double nb,
		size_t precision)
{
	size_t	write_len;
	long	int_part;
	double	frac_part;

	write_len = 0;
	nb = strf_round_float(nb, precision);
	if ((nb < 0) && (len > 0))
	{
		output[write_len++] = '-';
		nb = -nb;
		len--;
	}
	int_part = (long)nb;
	frac_part = nb - int_part;
	write_len += strf_putnbr(output + write_len, len, int_part);
	if ((len - write_len) > 0)
		output[write_len++] = '.';
	write_len += strf_putfloat_frac(output + write_len,
			len - write_len, frac_part, precision);
	return (write_len);
}

size_t	strf_putfloat(char *output, size_t len, double nb, size_t precision)
{
	return (strf_putfloat_raw(output, len, nb, precision));
}
