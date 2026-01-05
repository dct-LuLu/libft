# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    includes.mk                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/04 13:30:49 by jaubry--          #+#    #+#              #
#    Updated: 2026/01/05 07:42:13 by jaubry--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCDIR			= include

INCDIRS_LIBFT	= colors \
				  colors/rgb \
				  vectors \
				  vectors/vec2 \
				  vectors/vec2i \
				  vectors/vec3 \
				  vectors/vec3i \
				  vectors/vec4 \
				  vectors/vec4i

INCDIRS_LIBFT	:= $(INCDIR) $(addprefix $(INCDIR)/, $(INCDIRS_LIBFT))
