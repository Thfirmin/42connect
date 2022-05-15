/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:43:01 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/15 10:13:10 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//lower case to upper case letter conversion

int	ft_toupper(int c)
{
	if ((char) c >= 'a' && (char) c <= 'z')
		c -= 32;
	return (c);
}
