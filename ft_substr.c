/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 06:19:20 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/06 15:27:32 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		r = malloc(sizeof(char));
	else if (start + len > ft_strlen(s))
		r = malloc(sizeof(char) * (ft_strlen(&s[start]) + 1));
	else
		r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	while ((i < len) && (start < ft_strlen(s)) && s[start + i])
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str = "i just want this part #############";
	size_t size = 10;

	printf("'%s'\n", ft_substr(str, 5, size));
	return (0);
}
*/
