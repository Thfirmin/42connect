#include<stdio.h>
#include<string.h>
#include"libft.h"

int main(void)
{
	char	*i = (char *) ft_calloc(7, sizeof(char));
	while (*i)
	{
		printf("%c\n", *i);
		i++;
	}
	return (0);
}

