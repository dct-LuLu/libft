/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:14:46 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/06 15:42:13 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(const char c)
{
	return ((c == ' ') || ((c >= '\t') && (c <= '\r')));
}

/*
	Function that returns 1 if multiplying a by 10 and adding b will cause
	an overflow otherwise 0
	a can only be positive as well as b
*/

static int	will_overflow(long long a, int b)
{
	if (a)
	{
		if (10 > (LLONG_MAX / a))
			return (1);
	}
	a *= 10;
	if (b > (LLONG_MAX - a))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t		i;
	long long	num;
	int			neg;

	neg = 1;
	i = 0;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (ft_isdigit(str[i]))
	{
		if (will_overflow(num, str[i] - '0'))
			return (-1);
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (neg * num);
}

/*
	Gerer strings nulls? gerer les overflow et retourner 0?
*/
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]));
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d\n", atoi(argv[1]));
		printf("%d\n", atoi("\n\n5"));
	}
	return (0);
}
*/
