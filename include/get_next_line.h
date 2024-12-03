/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:37:48 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/25 17:36:30 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# define MAX_FD 1024

char	*get_next_line(int fd);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_strndup(char *str, size_t n);

void	*ft_memset(void *s, int c, size_t n);

void	*ft_calloc(size_t len, size_t size);

#endif
