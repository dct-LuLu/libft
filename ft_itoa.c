/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 05:24:01 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/08 15:18:17 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_itoalen(long int nb)
{
	size_t	len;

	if (!nb)
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

char	*ft_itoa(int n)
{
	char		*str;
	long int	num;
	size_t		i;
	size_t		len;

	i = 0;
	num = (long int)n;
	len = ft_itoalen(num);
	str = malloc(sizeof(char) * (len + 1));
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
		str[len - i - 1] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	str[len] = '\0';
	return (str);
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
