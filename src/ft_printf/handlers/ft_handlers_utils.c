/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:54:02 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/26 23:16:43 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_handlers.h"

ssize_t	handler(va_list args, char specifier)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (specifier == 'p')
		return (ft_put_ptr(va_arg(args, long unsigned)));
	else if ((specifier == 'd') || (specifier == 'i'))
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_putnbr(va_arg(args, unsigned)));
	else if (specifier == 'x')
		return (ft_put_hex(va_arg(args, unsigned), false));
	else if (specifier == 'X')
		return (ft_put_hex(va_arg(args, unsigned), true));
	return (ft_putchar(specifier));
}
