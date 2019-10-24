/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:37:57 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/23 14:09:58 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "libft.h"

# include <string.h>

void			*ft_memset(void *s, int c, size_t n);

void			ft_bzero(void *s, size_t n);

void			ft_memcpy(void *dest, const void *src, size_t n);

void			ft_memccpy(void *dest, const void *src, int c, size_t n);

void			*f_memmove(void *dest, const void *src, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

size_t			ft_strlen(const char *s);

int				ft_alpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isacii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

int				ft_strncmp(const void *s1, const void *s2, size_t n);

size_t			ft_strlcpy(char *dest, const char *src, size_t size);

size_t			ft_strlcat(char *dest, const char *src, size_t size);

int				ft_atoi(const char *nptr);

void			*ft_calloc(size_t nmemb, size_t size);

char			*ft_strdup(const char *s);

char			*ft_strjoin(char const *s1, char *s2);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strtrim(char const *s1, char const *set);

char			*ft_strndup(const char *s, size_t n);

char			**ft_split(char const *s, char c);

char			*ft_itoa(int n);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

void			ft_putendl_fd(char *s, int fd);

char			*ft_strcpy(char *dst, const char *src);

char			*ft_strncpy(char *dst, const char *src, int n);

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(void *content);

void			ft_lstadd_front(t_list **alst, t_list *new);

int				ft_lstsize(t_list *lst);

t_list			*ft_lstlast(t_list *lst);

void			ft_lstadd_back(t_list **alst, t_list *new);

void			ft_lstdelone(t_list *lst, void (*del)(void *));

void			ft_lstclear(t_list **lst, void (*del)(void *));

void			ft_lstiter(t_list *lst, void (*f)(void *));

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
