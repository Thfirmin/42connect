#include <stdio.h>
#include <string.h>

void	ft_printarray(char *str, int size);

void *ft_memchr(const void *s, int c, unsigned int n);

int	main(void)
{
	char	s1[] = "Hello, World";
	char	s2[] = "Hello, World";
	int	c = 'l';

	unsigned int n = sizeof(s1);
	ft_printarray(s1, n);
	printf("\n");
	ft_memchr(s1, c, n);
	ft_printarray(s1, n);
	printf("\n\n");
	ft_printarray(s2, n);
	printf("\n");
	memchr(s2, c, n);
	ft_printarray(s2, n);
	printf("\n");
}

void	ft_printarray(char *str, int size)
{
	int	count = 0;
	while (size --)
	{
		printf("%c", str[count]);
		count ++;
	}
}
