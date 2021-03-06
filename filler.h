/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efriedma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:58:13 by efriedma          #+#    #+#             */
/*   Updated: 2018/08/12 19:58:48 by efriedma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <wchar.h>
# include "src/get_next_line/get_next_line.h"
//# include "ft_printf/includes/ft_printf.h"

int					ft_printf(const char *str, ...);
int					ft_dprintf(int fd, const char *str, ...);

char			*ft_uitoabase(unsigned long long nbr, int base);
char			*ft_itoabase(long long nbr, int base);
char			*ft_malset(int size, char set);
unsigned char	*ft_umalset(int size, unsigned char set);
wchar_t			*ft_wstrdup(const char *s);
int				ft_wstrlen(wchar_t *str);
void			ft_putwchar(wchar_t c);
char			*upper(char *print);
char			*prep_x(char *print, char *prep);
int				find_len(const char *str);
int				ft_matoi(const char *str);
void			*ft_memchr(const void *s, int c, size_t n);
void			ft_putnbr_fd(int n, int fd);
void			ft_striter(char *s, void (*f)(char *));
char			*ft_strnew(size_t size);
int				ft_atoi(const char *str);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_putstr(char *str);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *s1, const void *s2, size_t n);
void			ft_putstr_fd(char const *s, int fd);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strrchr(const char *s1, int c);
int				ft_isalnum(int c);
void			ft_memdel(void **ap);
char			*ft_strcat(char *s1, const char *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			**ft_strsplit(char const *s, char c);
int				ft_isalpha(int c);
void			*ft_memmove(void *s1, const void *s2, size_t n);
char			*ft_strchr(const char *s1, int c);
size_t			ft_strlen(const char *str);
char			*ft_strstr(const char *s1, const char *s2);
int				ft_isascii(int c);
void			*ft_memset(void *b, int c, size_t len);
void			ft_strclr(char *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
int				ft_isdigit(int c);
void			ft_putchar(char c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s);
int				ft_isprint(int c);
void			ft_putchar_fd(char c, int fd);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_tolower(int c);
char			*ft_itoa(int n);
void			ft_putendl(char const *s);
void			ft_strdel(char **as);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_toupper(int c);
void			*ft_memalloc(size_t size);
void			ft_putendl_fd(char const *s, int fd);
char			*ft_strdup(const char *s);
char			*ft_strncpy(char *dest, const char *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			ft_putnbr(int n);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_multiply(int a, int b);
int				ft_divide(int a, int b);
int				ft_add(int a, int b);
int				ft_subtract(int a, int b);
char			**ft_getnextline(char *str);
char			*ft_capitalize(char *str);
int				ft_wordcount(char *str);
char			*ft_memjoin(void *a1, void *b1, size_t asize, size_t bsize);

#endif
