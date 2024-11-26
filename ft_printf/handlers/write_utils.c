/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:55:45 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/26 23:16:50 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_handlers.h"

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

ssize_t	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

ssize_t	ft_putstr(char *str)
{
	return (write(1, str, ft_strlen(str)));
}

ssize_t	ft_putstr_l(char *str, size_t len)
{
	return (write(1, str, len));
}

ssize_t	ft_printstr(char *str)
{
	if (!str)
		return (ft_putstr_l("(null)", 6));
	else
		return (ft_putstr(str));
}
