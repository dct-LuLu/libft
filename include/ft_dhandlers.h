/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dhandlers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:50:07 by jaubry--          #+#    #+#             */
/*   Updated: 2025/01/10 09:57:34 by jaubry--         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DHANDLERS_H
# define FT_DHANDLERS_H
# include <sys/types.h>
# include <stdbool.h>
# include <stdarg.h>
# include <unistd.h>

ssize_t	handler_fd(va_list args, char specifier, int fd);

ssize_t	ft_put_hex_fd(long unsigned int nb, bool maj, int fd);
ssize_t	ft_put_ptr_fd(long unsigned int ptr, int fd);
ssize_t	ft_putnbr_fd(long int nb, int fd);
ssize_t	ft_putchar_fd(char c, int fd);
ssize_t	ft_putstr_fd(char *str, int fd);
ssize_t	ft_putstr_l_fd(char *str, size_t len, int fd);
ssize_t	ft_put_unknown_fd(char c, int fd);
ssize_t	ft_printstr_fd(char *str, int fd);

#endif
