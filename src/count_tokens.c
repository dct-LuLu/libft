/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_tokens.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 02:04:52 by jaubry--          #+#    #+#             */
/*   Updated: 2024/12/10 02:36:59 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns the number of "tokens" separated by the char sep
*/
int	count_tokens(const char *str, char sep)
{
	size_t	i;
	int		count;
	bool	in;

	i = 0;
	count = 0;
	in = false;
	while (str && str[i])
	{
		if (!in && (str[i] != sep))
		{
			in = true;
			count++;
		}
		else if (str[i] == sep)
			in = false;
		i++;
	}
	return (count);
}

