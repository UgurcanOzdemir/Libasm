/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 13:59:28 by uozdemir          #+#    #+#             */
/*   Updated: 2017/10/21 15:45:29 by uozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);

int		ft_toupper(int c);
int		ft_tolower(int c);

char	*ft_strcat(char *s1, char *s2);
char	*ft_strdup(const char *s1);
int		ft_strlen(char *str);

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	ft_cat(int fd);
void	ft_puts(char *str);

void	ft_putstr_fd(char *s, int fd);
void	ft_putstr(char *s);

void	ft_putchr(int c);
void	ft_putchr_fd(int c, int fd);
#endif