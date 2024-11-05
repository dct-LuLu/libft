/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 05:44:43 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/28 05:54:22 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recuputnbr_fd(long int n, int fd)
{
	if (n > 0)
	{
		ft_recuputnbr_fd(n / 10, fd);
		ft_putchar_fd(((n % 10) + '0'), fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = (long int)(n);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
		ft_recuputnbr_fd(num, fd);
}

/*
int	main(void)
{
	ft_putnbr_fd(0, 2);
	return (0);
}
*/
