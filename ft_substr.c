/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 06:19:20 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/28 07:13:21 by jaubry--         ###   ########.fr       */
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
	else
		r = malloc(sizeof(char) * (ft_strlen(&s[start]) + 1));
	if (!r)
		return (NULL);
	while ((i < len) && (start < ft_strlen(s)))
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
