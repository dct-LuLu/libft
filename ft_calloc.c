/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:27:09 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/22 09:50:34 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t len, size_t size)
{
	return (malloc(len * size));
}

/*
#include <stdint.h>
#include <stdio.h>
int	main(void)
{
	char	*t;

	t = ft_calloc(SIZE_MAX, 2);
	printf("%d\n", t == NULL);
	return (0);
}
*/

/*
	Maybe handle overflows ...?
*/
