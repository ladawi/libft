# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 09:29:31 by ladawi            #+#    #+#              #
#    Updated: 2019/10/23 14:06:36 by ladawi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCC = ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
ft_memcpy.c ft_memmove.c ft_memset.c ft_memset.c ft_putchar_fd.c\
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
ft_strmapi.c ft_strncmp.c ft_strncpy.c ft_strndup.c ft_strnstr.c ft_strrchr.c\
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRCO = ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o\
ft_isprint.o ft_itoa.o ft_memccpy.o ft_memchr.o ft_memcmp.o\
ft_memcpy.o ft_memmove.o ft_memset.o ft_memset.o ft_putchar_fd.o\
ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o\
ft_strcpy.o ft_strdup.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o\
ft_strmapi.o ft_strncmp.o ft_strncpy.o ft_strndup.o ft_strnstr.o ft_strrchr.o\
ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o

BONUSC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

BONUSO = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o\
ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o\

all: $(NAME)

$(NAME):
	@gcc -c $(SRCC)
	@ar rc $(NAME) $(SRCO)

clean:
	@rm -rf $(SRCO)

re: clean
	@gcc -c $(SRCC)

fclean: clean
	@rm -rf $(NAME)

bonus:
	@gcc -c $(SRCC) $(BONUSC)
	@ar rc $(NAME) $(SRCO) $(BONUSO)
