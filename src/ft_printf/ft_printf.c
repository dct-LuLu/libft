/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:28:03 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/26 23:16:34 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_handlers.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	size_t		i;
	size_t		write_len;

	i = 0;
	write_len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			write_len += handler(args, format[++i]);
		else
			write_len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (write_len);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*str;

	str = malloc(1);
	ft_printf("Integer: %d, Unsigned: %u, Hex:
	%x, Pointer: %p\n", 42, 42, 42, str);
	printf("Integer: %d, Unsigned: %u, Hex: %x, Pointer: %p\n", 42, 42, 42, str);
	free(str);
	return (0);
}
*/
