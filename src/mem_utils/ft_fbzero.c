/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fbzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:07:37 by pabellis          #+#    #+#             */
/*   Updated: 2026/02/06 22:44:35 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline void	zero_block(long long *ptr)
{
	ptr[0] = 0;
	ptr[1] = 0;
	ptr[2] = 0;
	ptr[3] = 0;
	ptr[4] = 0;
	ptr[5] = 0;
	ptr[6] = 0;
	ptr[7] = 0;
}

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
	ssize_t			n_divide_64;
	ssize_t			n_modulo_64;

	ptr = (long long *)s;
	n_divide_64 = n / 64;
	while (n_divide_64--)
	{
		zero_block(ptr);
		ptr += 8;
	}
	byte_ptr = (unsigned char *)ptr;
	n_modulo_64 = n % 64;
	while (n_modulo_64--)
		*byte_ptr++ = 0;
	return (s);
}
