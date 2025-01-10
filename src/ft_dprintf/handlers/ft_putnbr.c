/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:58:10 by jaubry--          #+#    #+#             */
/*   Updated: 2025/01/10 09:58:44 by jaubry--         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dhandlers.h"

static ssize_t	ft_recu_putnbr_fd(long int nb, int fd)
{
	if (nb > 0)
		return (ft_recu_putnbr_fd(nb / 10, fd)
			+ ft_putchar_fd((nb % 10) + '0', fd));
	return (0);
}

ssize_t	ft_putnbr_fd(long int nb, int fd)
{
	ssize_t		write_len;

	write_len = 0;
	if (nb < 0)
	{
		write_len += ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb == 0)
		write_len += ft_putchar_fd('0', fd);
	else
		write_len += ft_recu_putnbr_fd(nb, fd);
	return (write_len);
}
