/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:36:48 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/09 13:45:14 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char* s, int c)
{
	int	count;
	int	lastocur;

	count = 0;
	lastocur = -1;
	while (s[count] != '\0')
	{
		if (s[count] == (char) c)
		{
			lastocur = count;
		}
		count ++;
	}
	if (lastocur >= 0)
	{
		return ((char *) s + lastocur);
	}
	else if (c == 0)
	{
		return ((char *) s + count);
	}
	else
	{
		return ('\0');
	}
}
