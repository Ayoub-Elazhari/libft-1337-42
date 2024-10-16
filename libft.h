/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:55:02 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/16 18:34:11 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
void    ft_putchar_fd(int c, int fd);
void    ft_putstr_fd(char *s, int fd);
int ft_atoi(const char *nptr);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(char const *s1, char const *set);

#endif