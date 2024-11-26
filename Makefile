NAME		= libft.a
OBJDIR		= .obj
PRINTF_DIR	= ft_printf
HANDL_DIR	= $(PRINTF_DIR)/handlers

# Regular libft sources
SRCS		= ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c \
			  ft_strdup.c ft_strlen.c ft_strtrim.c ft_bzero.c \
              ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c \
              ft_strmapi.c ft_substr.c ft_calloc.c ft_isprint.c \
              ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c \
              ft_tolower.c ft_isalnum.c ft_itoa.c ft_memset.c \
              ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c \
              ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strchr.c \
              ft_strlcpy.c ft_strrchr.c strr_utils.c ratoi.c \
              ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
              ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
              ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Printf sources
PRINTF_SRCS	= ft_handlers_utils.c ft_put_hex.c ft_putnbr.c write_utils.c
PRINTF_SRCS	:=$(addprefix $(HANDL_DIR)/, $(PRINTF_SRCS)) \
			  $(PRINTF_DIR)/ft_printf.c

SRCS		:=$(SRCS) $(PRINTF_SRCS)
OBJS		= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
INCLUDES	= libft.h $(HANDL_DIR)/ft_handlers.h

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
IFLAGS		= -I. -I$(PRINTF_DIR) -I$(HANDL_DIR)
AR			= ar
ARFLAGS		= rcs

all: $(NAME)

$(NAME): $(OBJS) | $(INCLUDES)
	$(AR) $(ARFLAGS) $@ $^

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(INCLUDES:.h=.h.gch)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
