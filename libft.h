/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:52:54 by north             #+#    #+#             */
/*   Updated: 2023/05/19 19:38:50 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <strings.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);

// void    ft_bzero(char *s, size_t n);
// int     ft_isalnum(int c);
// int     ft_isalpha(int c);
// int     ft_isascii(int c);
// int     ft_isdigit(int c);
// int     ft_isprint(int c);
// void    *ft_memchr(const void *s, int c, size_t n);
// int     ft_memcmp(const void *s1, const void *s2, size_t n);
// void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
// void    *ft_memmove(void *dst, const void *src, size_t len);
// void    ft_memset(char *b, int c, size_t len);
// char    *ft_strchr(char *s, int c);
// Copy src to dest

// char    *ft_strdup(char *src);
// int     ft_strlen(char const *str);
// char    *ft_strjoin(char const *s1, char const *s2);
// unsigned int    ui_ft_strlen(char *str);
// unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
// unsigned int    ui_ft_strlen(char *str);
// unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
// //      printf("\nft_strlcpy--%u\n", ft_strlcpy(buf2, s2,;
// unsigned long   ft_strlen(const char *str);
// int     ft_strncmp(char *s1, char *s2, unsigned int n);
// char    *ft_strnstr(char *haystack, const char *needle, size_t len);
// char    *ft_strrchr(char *s, int c);
// ft_strtrim;
// char    *ft_strtrim(char const *s1, char const *set);
// char    *ft_substr(char const *s, unsigned int start, size_t len);
// int     ft_tolower(int c);
// int     ft_toupper(int c);

#endif
