#include<stdio.h>
#include<string.h>
#include"libft.h"

int main(void)
{
	char	i[] = "Ola, Mundo!";
	char	*ptr = ft_strdup(i);
	printf ("%s\n%s\n", i, ptr);
	strcpy(i, "ola, mundo?");
	printf ("%s\n%s\n", i, ptr);
	return (0);
}

