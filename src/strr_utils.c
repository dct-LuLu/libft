/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strr_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:12:47 by jaubry--          #+#    #+#             */
/*   Updated: 2025/02/22 20:23:05 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strrlen(char **strs)
{
	size_t	len;

	len = 0;
	while (strs[len])
		len++;
	return (len);
}

void	free_strr(char **strs)
{
	size_t	i;

	i = 0;
	while (strs && strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

void	free_strr_fail(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	while (strs && strs[i] && (i < size))
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

char	**strrcpy(char **strs)
{
	char	**new;
	size_t	i;

	i = 0;
	new = ft_calloc(ft_strrlen(strs) + 1, sizeof(char *));
	if (!new)
		return (NULL);
	while (strs[i])
	{
		new[i] = ft_strdup(strs[i]);
		if (!new[i])
			return (free_strr_fail(new, i), free(new), NULL);
		i++;
	}
	return (new);
}

int	strr_add(char ***strs, char *str)
{
	char	**new;
	size_t	i;

	i = 0;
	new = ft_calloc(ft_strrlen(*strs) + 2, sizeof(char *));
	if (!new)
		return (1);
	while (*strs[i])
	{
		new[i] = ft_strdup(*strs[i]);
		if (!new[i])
			return (free_strr_fail(new, i), free(new), 1);
		i++;
	}
	new[i] = ft_strdup(str);
	if (!new[i])
		return (free_strr_fail(new, i), free(new), 1);
	free_strr(*strs);
	*strs = new;
	return (0);
}
