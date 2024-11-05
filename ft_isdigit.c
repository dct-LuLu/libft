/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 06:28:41 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/21 06:01:45 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Function that returns 1 if the character is a number else 0
*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>

int	main(void)
{
	printf("'1': %d\n", ft_isdigit('1'));
	printf("'a': %d\n", ft_isdigit('a'));
	return (0);
}
*/
