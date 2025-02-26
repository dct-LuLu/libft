/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 06:43:01 by jaubry--          #+#    #+#             */
/*   Updated: 2024/08/21 06:05:00 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Function that returns 1 if the character is printable else 0
*/
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
