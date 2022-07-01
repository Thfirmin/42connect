/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 07:04:04 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/01 09:42:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *, ...);
int		ft_binstrchr(char *str, int c);
size_t	holderfinder(const char plcholder, va_list plcvalue);
size_t	ft_ftputchar(char c);
size_t	ft_ftputstr(char *str);
size_t	ft_ftputnbr(int nb);
size_t	ft_ftputunbr(unsigned int nb);
size_t	ft_ftputptr(void *ptr);
size_t	ft_ftputhex(int nb, char plcholder);

#endif
