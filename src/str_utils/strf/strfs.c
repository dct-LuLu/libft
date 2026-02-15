/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strfs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:01:45 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/15 05:25:49 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	parse_precision(const char **format)
{
	size_t	precision;

	precision = FLOAT_PRECISION;
	if (**format == '.')
	{
		(*format)++;
		precision = 0;
		while (ft_isdigit(**format))
		{
			precision = precision * 10 + (**format - '0');
			(*format)++;
		}
	}
	return (precision);
}

static size_t	strf_handler(char *output, const size_t len,
		const char **format, va_list args)
{
	const size_t	precision = parse_precision(format);
	const char		specifier = **format;

	if (specifier == 'c')
		output[0] = va_arg(args, int);
	else if (specifier == 's')
		return (strf_putstr(output, len, va_arg(args, char *)));
	else if (specifier == 'p')
		return (strf_putptr(output, len, va_arg(args, long unsigned)));
	else if ((specifier == 'd') || (specifier == 'i'))
		return (strf_putnbr(output, len, va_arg(args, int)));
	else if (specifier == 'u')
		return (strf_putnbr(output, len, va_arg(args, unsigned)));
	else if ((specifier == 'x') || (specifier == 'X'))
		return (strf_puthex(output, len, va_arg(args, unsigned),
				(specifier == 'X')));
	else if (specifier == 'f')
		return (strf_putfloat(output, len, va_arg(args, double), precision));
	else if (specifier == 'g')
		return (strf_putfloat_g(output, len, va_arg(args, double), precision));
	else
		output[0] = specifier;
	return (1);
}

void	strfv(char *output, const size_t len, const char *format,
		va_list args)
{
	size_t	write_i;

	write_i = 0;
	while (*format && (write_i < (len - 1)))
	{
		if (*format == '%')
		{
			format++;
			write_i += strf_handler(output + write_i,
					len - 1 - write_i, &format, args);
		}
		else
		{
			output[write_i] = *format;
			write_i++;
		}
		format++;
	}
	output[write_i] = '\0';
}

/*
	Function meant to do same as printf but writes on an string, with max len
	and uses `__attribute__` for compiler check arg based on format
*/
__attribute__((format(printf, 3, 4)))
void	strf(char *output, const size_t len, const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	strfv(output, len, format, args);
	va_end(args);
}
