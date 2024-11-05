/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:33:52 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/27 14:05:50 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	if (!c)
		return ((char *)(&s[len]));
	while (i <= len)
	{
		if (s[len - i - 1] == c)
			return ((char *)(&s[len - i - 1]));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("'%s'\n", ft_strrchr("", '\0'));
	return (0);
}
*/