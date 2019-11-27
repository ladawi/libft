# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 09:29:31 by ladawi            #+#    #+#              #
#    Updated: 2019/11/27 13:25:42 by ladawi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
ft_memcpy.c ft_memmove.c ft_memset.c ft_memset.c ft_putchar_fd.c\
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c\

SRCO = $(SRC:%.c= %.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

BONUSO = $(BONUS:%.c= %.o)

INCLUDE = libft.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCO) $(INCLUDE)
	@ar -rcs $(NAME) $(SRCO)

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(SRCO)
	@rm -rf $(BONUSO)

re: fclean all

fclean: clean
	@rm -rf $(NAME)

bonus: $(NAME) $(BONUSO)
	@ar rc $(NAME) $(BONUSO)
