#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	main(void)
{
	char c = 'S';
	char s[] = "thiago";
	size_t len = 0;
	len = ft_printf("%j\n");
	printf("%lu\n", len);
	len = printf("%j\n");
	printf("%lu\n", len);
	return (0);
}
