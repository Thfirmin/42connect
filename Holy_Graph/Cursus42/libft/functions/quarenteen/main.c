#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dst, const char* src, unsigned int size);

int	main(void)
{
	char	c1[7] = "Aa";
	char	c2[] = "Zbcdefgew";
	int	ver42 = ft_strlcpy(c1, c2, sizeof(c1));
	printf("42 version: %s com tamanho %d\n", c1,  ver42);
}
