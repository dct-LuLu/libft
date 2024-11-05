/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:58:07 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/27 14:05:04 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while ((big[i]) && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < len))
			j++;
		if (little[j] == '\0')
			return (&((char *)(big))[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("'%s'\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);	
}
*/