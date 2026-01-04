/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:28:19 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/04 12:55:31 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns value of the uppercase equivalent of the lowercase character passed.
*/
int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}
