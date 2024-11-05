/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 07:20:30 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/28 07:42:51 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_splitlen(char const *s, char c)
{
	size_t	i;
	size_t	len;
	int		in;

	i = 0;
	in = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!in)
				len++;
			in = 1;
		}
		else
			in = 0;
		i++;
	}
	return (len);
}

static size_t	ft_tokenlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

static char	*ft_strndup(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*r;

	i = 0;
	len = ft_tokenlen(s, c);
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (s[i] && (i < len))
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

static char	**ft_freesplit(char **split, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	splitlen;
	char	**split;

	i = 0;
	j = 0;
	splitlen = ft_splitlen(s, c);
	split = malloc(sizeof(char *) * (splitlen + 1));
	if (!split)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
		{
			split[j] = ft_strndup(&s[i], c);
			if (!split[j])
				return (ft_freesplit(split, j));
			i += ft_tokenlen(&s[i], c);
			j++;
		}
		i++;
	}
	split[splitlen] = 0;
	return (split);
}

/*
#include <unistd.h>
#include <stdio.h>

void	print_tab(char **s)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		write(1, "'", 1);
		while (s[i][j])
		{
			write(1, &s[i][j], 1);
			j++;
		}
		write(1, "'", 1);
		write(1, "\n", 1);
		free(s[i]);
		i++;
	}
	printf("'%s'\n", s[i]);
	free(s);
}

int	main(void)
{
	print_tab(ft_split("lorem ipsum dolor sit 
	amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '));
	return (0);
}
*/
