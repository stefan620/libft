/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:18:41 by silic             #+#    #+#             */
/*   Updated: 2024/09/08 13:18:45 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>

int	ft_atoi(const char *str);
void    ft_bzero(void *str, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int	ft_isalnum(int str);
int	ft_isalpha(int str);
int 	ft_isascii(int arg);
int	ft_isdigit(int str);
int	ft_isprint(int arg);
int	ft_memcmp(const char *str1, const char *str2, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strdup(const char *s);
int	ft_tolower(int ch);
char	*ft_strrchr(const char *str, int c);
int	ft_toupper(int ch);
size_t	ft_strlen(char *str);
char *ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif

