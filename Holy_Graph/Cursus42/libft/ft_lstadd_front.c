/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:17:54 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/05 12:07:18 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	size_t	len;
	size_t	i;
	t_list	**listf;

	i = 0;
	len = 0;
	while (*(lst + len))
		len++;
	listf = (t_list *)malloc (sizeof(t_size) * (++len));
	if (!listf)
		return (0);
	*(listf + i++) = new;
	while (i < len)
	{
		*(listf + i) = *(lst + (i - 1));
		i ++;
	}
	free (lst);
	*(listf + i) = 0;
	lst = listf;
}
