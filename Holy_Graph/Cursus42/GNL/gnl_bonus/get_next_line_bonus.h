/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:14:25 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/18 01:25:19 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE (42)
# endif
# include <stdlib.h>
# include <unistd.h>

typedef struct 		s_list
{
	int				f_fd;
	char			*f_str;
	struct s_list	*newfile;
} f_list;

char	*get_next_line(int fd);
char	*read_line(int fd, char *str);
char	*take_line(char *str);
void	*ft_calloc(int count, int size);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
char	*take_line(char *str);
char	*clean_buffer(char *buffer);
f_list	*backup_line(int fd, f_list *list);
f_list	*addnew_list(int fd, f_list *list);

#endif
