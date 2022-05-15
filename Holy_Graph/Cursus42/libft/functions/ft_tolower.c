/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:42:36 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/15 10:12:50 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//upper case to lower case letter conversion

int	ft_tolower(int c)
{
	if ((char) c >= 'A' && (char) c <= 'Z')
		c += 32;
	return (c);
}
