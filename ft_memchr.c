/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:50:12 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/26 13:20:41 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && ((unsigned char *)s)[i])
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", (char *)ft_memchr(argv[1], 'o', 2));
	return (0);
}
*/
