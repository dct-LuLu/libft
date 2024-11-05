/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 06:42:55 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/28 06:36:32 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*r;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		r[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		r[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	r[len] = '\0';
	return (r);
}
