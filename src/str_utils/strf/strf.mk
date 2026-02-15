# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strf.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/14 08:18:04 by jaubry--          #+#    #+#              #
#    Updated: 2026/02/15 05:25:19 by jaubry--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
STRF_DIR	= $(STR_DIR)/strf

# Source files
STRF_SRCS	= strfs.c \
			  strf_putstr.c \
			  strf_putnbr.c \
			  strf_puthex.c \
			  strf_putptr.c \
			  strf_putfloat.c \
			  strf_putfloat_g.c
SRCS		+= $(addprefix $(STRF_DIR)/, $(STRF_SRCS))

# VPATH
vpath %.c $(STRF_DIR)
