/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:58:10 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/16 19:01:29 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_handlers.h"

static ssize_t	ft_recu_putnbr(long int nb)
{
	if (nb > 0)
		return (ft_recu_putnbr(nb / 10) + ft_putchar((nb % 10) + '0'));
	return (0);
}

ssize_t	ft_putnbr(long int nb)
{
	ssize_t		write_len;

	write_len = 0;
	if (nb < 0)
	{
		write_len += ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		write_len += ft_putchar('0');
	else
		write_len += ft_recu_putnbr(nb);
	return (write_len);
}
