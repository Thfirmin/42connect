/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:45:02 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/11 03:35:16 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char    *ft_strrchr(const char* s, int c);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
unsigned int	ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strnstr(const char	*big, const char *little, unsigned int len);

#endif
