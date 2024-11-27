/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:50:07 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/16 19:07:05 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HANDLERS_H
# define FT_HANDLERS_H
# include <sys/types.h>
# include <stdbool.h>
# include <stdarg.h>
# include <unistd.h>

ssize_t	handler(va_list args, char specifier);

ssize_t	ft_put_hex(long unsigned int nb, bool maj);
ssize_t	ft_put_ptr(long unsigned int ptr);
ssize_t	ft_putnbr(long int nb);
ssize_t	ft_putchar(char c);
ssize_t	ft_putstr(char *str);
ssize_t	ft_putstr_l(char *str, size_t len);
ssize_t	ft_put_unknown(char c);
ssize_t	ft_printstr(char *str);

#endif
