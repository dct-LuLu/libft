/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dhandlers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:50:07 by jaubry--          #+#    #+#             */
/*   Updated: 2025/01/10 12:09:06 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DHANDLERS_H
# define FT_DHANDLERS_H
# include <sys/types.h>
# include <stdbool.h>
# include <stdarg.h>
# include <unistd.h>

ssize_t	handler(va_list args, char specifier, int fd);

ssize_t	ft_put_hex(long unsigned int nb, bool maj, int fd);
ssize_t	ft_put_ptr(long unsigned int ptr, int fd);
ssize_t	ft_putnbr(long int nb, int fd);
ssize_t	ft_putchar(char c, int fd);
ssize_t	ft_putstr(char *str, int fd);
ssize_t	ft_putstr_l(char *str, size_t len, int fd);
ssize_t	ft_put_unknown(char c, int fd);
ssize_t	ft_printstr(char *str, int fd);

#endif
