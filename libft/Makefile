# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 17:50:59 by cyazid-r          #+#    #+#              #
#    Updated: 2023/04/02 15:10:58 by cyazid-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
CC				=	gcc
RM				=rm -f	
CFLAGS			=	-Wall -Wextra -Werror

SRCS			=	ft_atoi.c			ft_calloc.c		ft_isalpha.c	ft_isdigit.c	\
					ft_memchr.c			ft_memcpy.c		ft_memset.c		ft_strlen.c		\
					ft_strnstr.c		ft_tolower.c	ft_memcmp.c		ft_toupper.c	\
					ft_bzero.c			ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
					ft_memmove.c		ft_strchr.c		ft_strncmp.c	ft_strrchr.c	\
					ft_strlcpy.c		ft_strlcat.c	ft_strdup.c		ft_substr.c		\
					ft_itoa.c			ft_strjoin.c	ft_strtrim.c	ft_split.c		\
					ft_strmapi.c		ft_striteri.c	ft_putstr_fd.c	ft_putchar_fd.c	\
					ft_putendl_fd.c		ft_putnbr_fd.c	ft_lstnew.c		ft_lstdelone.c	\
					ft_lstadd_front.c	ft_lstsize.c	ft_lstadd_back.c

OBJS			= $(SRCS:.c=.o)

BONUS			=  ft_lstadd_back.c	ft_lstadd_back.c	ft_lstdelone.c	ft_lstsize.c	\
							ft_lstlast.c	ft_lstnew.c	ft_lstclear.c	ft_lstiter.c	\
							ft_lstmap.c
OBJS_BONUS		=$(BONUS:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

fclean: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(OBJS)

re: fclean all

$(OBJS): %.o:%.c ft_*.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS_BONUS)
		ar rcs $(NAME) $(OBJS_BONUS)

.PHONY: all fclean clean re bonus
