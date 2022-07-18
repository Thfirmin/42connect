/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_copy.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:46:52 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/17 15:38:20 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_COPY_H
# define GET_NEXT_LINE_COPY_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE (1)
# endif

# define MAX_FD (256) // FD limit in macOS: ulimit -Sn

# include <unistd.h>
# include <stdlib.c>
# include <stdio.h>
# include <fcntl.h>

char	*get_next_line(int fd);

void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(char *s);
int		ft_strlen(char *s);

#endif
