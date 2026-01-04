/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:30:46 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/04 12:55:09 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns value of the lowercase equivalent of the uppercase character passed.
*/
int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}
