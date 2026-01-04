/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 05:24:01 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/04 13:01:03 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoalen(long int nb);

/*
	Return a string equivalent of the integer passed.
*/
char	*ft_itoa(int n)
{
	char		*str;
	long int	num;
	size_t		i;
	size_t		len;

	i = 0;
	num = (long int)n;
	len = ft_itoalen(num);
	str = ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len - i - 1] = '0' + (num % 10);
		num /= 10;
		i++;
	}
	return (str);
}

static size_t	ft_itoalen(long int nb)
{
	size_t	len;

	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
