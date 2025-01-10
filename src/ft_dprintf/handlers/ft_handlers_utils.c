/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:54:02 by jaubry--          #+#    #+#             */
/*   Updated: 2025/01/10 09:12:31 by jaubry--         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dhandlers.h"

ssize_t	handler_fd(va_list args, char specifier, int fd)
{
	if (specifier == 'c')
		return (ft_putchar_fd(va_arg(args, int), fd));
	else if (specifier == 's')
		return (ft_printstr_fd(va_arg(args, char *), fd));
	else if (specifier == 'p')
		return (ft_put_ptr_fd(va_arg(args, long unsigned), fd));
	else if ((specifier == 'd') || (specifier == 'i'))
		return (ft_putnbr_fd(va_arg(args, int), fd));
	else if (specifier == 'u')
		return (ft_putnbr_fd(va_arg(args, unsigned), fd));
	else if (specifier == 'x')
		return (ft_put_hex_fd(va_arg(args, unsigned), false, fd));
	else if (specifier == 'X')
		return (ft_put_hex_fd(va_arg(args, unsigned), true, fd));
	return (ft_putchar_fd(specifier, fd));
}
