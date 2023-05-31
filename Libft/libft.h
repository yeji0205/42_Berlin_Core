/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:34:13 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/29 02:38:48 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

///////// Libc functions //////////////////
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset (void *block, int c, size_t size);
void	ft_bzero(void *block, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *to, const void *from, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t size);
void	*ft_memchr(const void *block, int c, size_t size);
int	ft_memcmp(const void *a1, const void *a2, size_t size);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int	ft_atoi(const char *str);

///////// can use malloc() //////////////////
void	*ft_calloc(size_t numb_block, size_t size_block);
char	*ft_strdup(const char *str);

///////// Additional functions /////////
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
//char	**ft_split(char const *s, char c);
//char	*ft_itoa(int n);
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
