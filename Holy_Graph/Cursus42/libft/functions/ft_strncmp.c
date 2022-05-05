/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:04:24 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/05 04:29:09 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int	count;

	count = 0;
	while (count < (n - 1))
	{
		if (s1[count] == '\0' || s2[count] == '\0')
			break;
		else if (s1[count] != s2[count])
			break;
		count ++;
	}
	return (s1[count] - s2[count]);
}
