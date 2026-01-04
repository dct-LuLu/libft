/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fbzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:07:37 by pabellis          #+#    #+#             */
/*   Updated: 2026/01/04 15:39:08 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	erases the data in the n bytes of the memory starting at the 
	location pointed to by s, by writing zeros (bytes containing '\0') 
	to that area.
	param s memory area
	param n number of bytes erase.
	return a pointer to the memory area s..
*/
void	*ft_fbzero(void *s, size_t n)
{
	long long		*ptr;
	unsigned char	*byte_ptr;
	size_t			n_divide_64;

	ptr = (long long *)s;
	n_divide_64 = n / 64;
	while (n_divide_64--)
	{
		ptr[0] = 0;
		ptr[1] = 0;
		ptr[2] = 0;
		ptr[3] = 0;
		ptr[4] = 0;
		ptr[5] = 0;
		ptr[6] = 0;
		ptr[7] = 0;
		ptr += 8;
	}
	byte_ptr = (unsigned char *)ptr;
	n %= 64;
	while (n--)
		*byte_ptr++ = 0;
	return (s);
}
