/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:09:13 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/27 14:04:22 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((int *)(s))[i] = 0;
		i++;
	}
}

/*
int	main(void)
{
	void	*p;
	void	*ps;
	int		t;

	t = 4;
	p = &t;
	ps = NULL;
	ft_bzero(p, 5);
	ft_bzero(ps, 5);
	

	return (0);
}
*/
