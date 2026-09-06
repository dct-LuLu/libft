# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 01:19:17 by jaubry--          #+#    #+#              #
#    Updated: 2026/09/06 21:43:40 by jaubry--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOTDIR		?= .
include $(ROOTDIR)/mkidir/make_utils.mk

LIBNAME		= libft

# Directories
CDIR		= libft
SRCDIR		= src
OBJDIR		= .obj
DEPDIR		= .dep

XCERRCALDIR	= $(LIBDIR)/xcerrcal

# Includes
include $(XCERRCALDIR)/includes.mk includes.mk

INCLUDES	= $(INCDIRS_LIBFT) \
			  $(addprefix $(XCERRCALDIR)/, $(INCDIRS_XCERRCAL))

# Output
NAME		= $(LIBNAME).a
XCERRCAL	= $(XCERRCALDIR)/libxcerrcal.a

# Variables
MINIRT_MODE	= 0

VARS		= MINIRT_MODE=$(MINIRT_MODE) \
			  CL_TARGET_OPENCL_VERSION=$(CL_TARGET_OPENCL_VERSION)

# Compiler and flags
CC			?= cc

CFLAGS		= -Wall -Wextra -Werror \
			  -std=gnu11

DFLAGS		= -MMD -MP -MF $(DEPDIR)/$*.d

IFLAGS		= $(addprefix -I,$(INCLUDES))

VFLAGS		= $(addprefix -D,$(VARS))

CFLAGS		+= $(SANITIZE_FLAGS) $(INSPECT_FLAGS) $(PROFILE_FLAGS) $(FFLAGS) $(VFLAGS)
CF			= $(CC) $(CFLAGS) $(IFLAGS)

AR          = $(if $(findstring -flto,$(FFLAGS)),$(FAST_AR),$(STD_AR))
ARFLAGS		= rcs
RANLIB      = $(if $(findstring -flto,$(FFLAGS)),$(FAST_RANLIB),$(STD_RANLIB))

# VPATH
vpath %.h $(INCLUDES)
vpath %.o $(OBJDIR) $(XCERRCALDIR)/$(OBJDIR)
vpath %.d $(DEPDIR) $(XCERRCALDIR)/$(DEPDIR)

# Sources
include $(SRCDIR)/srcs.mk

OBJS		= $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))
DEPS		= $(addprefix $(DEPDIR)/, $(notdir $(SRCS:.o=.d)))

include $(ROOTDIR)/mkidir/make_rules.mk

$(NAME): $(XCERRCAL) $(OBJS)
	$(call ar-msg)
ifeq ($(VERBOSE),1)
	$(AR) $(ARFLAGS) $@ $(OBJS)
else
	@$(AR) $(ARFLAGS) $@ $(OBJS)
endif
ifeq ($(FAST),1)
ifeq ($(VERBOSE),1)
	$(RANLIB) $@
else
	@$(RANLIB) $@
endif
endif
	$(call ar-finish-msg)

$(XCERRCAL):
	@$(MAKE) -s -C $(XCERRCALDIR) $(RULE) $(VARS) ROOTDIR=../..

help:
	@echo "Available targets:"
	@echo -e "\tall, $(NAME)\t\t: Build the library"
	@echo -e "\tdebug\t\t\t\t: Build the library with debug symbols"
	@echo -e "\tre\t\t\t\t: Rebuild $(NAME)"
	@echo
	@echo -e "\tclean\t\t\t\t: Remove object files"
	@echo -e "\tfclean\t\t\t\t: Remove object files, libraries"
	@echo
	@echo -e "\tprint-%\t\t\t\t: Prints makefile variable content when replacing '%'"

clean:
	@$(MAKE) -s -C $(XCERRCALDIR) clean ROOTDIR=../..
	$(call rm-obj-msg)
	@rm -rf $(OBJDIR) $(DEPDIR)

fclean:
	@$(MAKE) -s -C $(XCERRCALDIR) fclean ROOTDIR=../..
	$(call rm-obj-msg)
	@rm -rf $(OBJDIR) $(DEPDIR)
	$(call rm-lib-msg)
	@rm -f $(NAME)
