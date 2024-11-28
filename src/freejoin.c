/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freejoin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 22:15:35 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/28 22:16:31 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*freejoin(char *s1, char *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (free(s1), NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	free(s1);
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[len] = '\0';
	return (str);
}
