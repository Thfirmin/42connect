/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:41:39 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 03:41:02 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char *str, int count);

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (ft_is_alphanumeric(str, count) == 1)
		{
			if (str[count] >= 'a' && str[count] <= 'z')
				str[count] -= 32;
			while (ft_is_alphanumeric(str, count) == 1)
			{
				count ++;
				if (str[count] >= 'A' && str[count] <= 'Z')
					str[count] += 32;
			}
		}
		else
			count ++;
	}
	return (str);
}

int	ft_is_alphanumeric(char *str, int count)
{
	if (str[count] >= '0' && str[count] <= '9')
	{
	}
	else if (str[count] >= 'a' && str[count] <= 'z')
	{
	}
	else if (str[count] >= 'A' && str[count] <= 'Z')
	{
	}
	else
	{
		return (0);
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char	c[] = "oi, tudo bem? 42PALaVraS quarenta-e-duas; cinquenta+e+um";
	printf ("%s\n", ft_strcapitalize(c));
	printf ("%s\n", c);
	return 0;
} */
