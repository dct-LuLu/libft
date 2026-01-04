/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:54:02 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/04 15:14:22 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdbool.h>
#include <stdarg.h>
#include <unistd.h>

ssize_t	ft_putchar(char c, int fd);
ssize_t	ft_printstr(char *str, int fd);
ssize_t	ft_putnbr(long int nb, int fd);
ssize_t	ft_put_hex(long unsigned int nb, bool maj, int fd);
ssize_t	ft_put_ptr(long unsigned int ptr, int fd);

ssize_t	handler(va_list args, char specifier, int fd)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int), fd));
	else if (specifier == 's')
		return (ft_printstr(va_arg(args, char *), fd));
	else if (specifier == 'p')
		return (ft_put_ptr(va_arg(args, long unsigned), fd));
	else if ((specifier == 'd') || (specifier == 'i'))
		return (ft_putnbr(va_arg(args, int), fd));
	else if (specifier == 'u')
		return (ft_putnbr(va_arg(args, unsigned), fd));
	else if (specifier == 'x')
		return (ft_put_hex(va_arg(args, unsigned), false, fd));
	else if (specifier == 'X')
		return (ft_put_hex(va_arg(args, unsigned), true, fd));
	return (ft_putchar(specifier, fd));
}
