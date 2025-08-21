/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 00:06:47 by jaubry--          #+#    #+#             */
/*   Updated: 2025/08/07 03:16:29 by jaubry--         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>

ssize_t	get_current_time(void)
{
	struct timeval	time;

	if (gettimeofday(&time, NULL) == -1)
		return (-1);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

ssize_t    get_cpu_time(void)
{
    int        fd;
    char    tab[200];
    size_t    i;

    fd = open("/proc/self/sched", O_RDONLY);
	if (fd == -1)
		return (-1);
    if (read(fd, tab, 200) == -1)
    {
        close(fd);
        return (-1);
    }
    i = 140;
    while (ft_isdigit(tab[i]) == 0)
        ++i;
    if (close(fd) == -1)
        return (-1);
    return (ft_atoi(tab + i));
}
