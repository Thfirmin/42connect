/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:28:29 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/09 13:27:24 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == (char) c)
		{
			return ((char *) s + count);
		}
		count ++;
	}
	if (c == 0)
	{
		return ((char *) s + count);
	}
	else
	{
		return ('\0');
	}
}
