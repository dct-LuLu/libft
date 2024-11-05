/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 05:24:01 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/28 05:48:55 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_itoalen(long int n)
{
	size_t	len;

	if (!n)
		return (1);
	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*r;
	long int	num;
	size_t		i;
	size_t		len;

	i = 0;
	num = (long int)n;
	len = ft_itoalen(num);
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	r[0] = '0';
	if (num < 0)
	{
		r[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		r[len - i - 1] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	r[len] = '\0';
	return (r);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("'%s'\n", ft_itoa(atoi(argv[1])));
	return (0);
}
*/
