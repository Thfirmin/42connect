	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:43:01 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/08 07:09:01 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//lower case to upper case letter conversion

int	ft_toupper(int c)
{
	if ( c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
