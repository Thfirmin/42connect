#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	main(void)
{
	char c = 'S';
	size_t len = 0;
	len = ft_printf("%p = %c\n", &c, c);
	printf("%lu\n", len);
	len = printf("%p = %c\n", &c, c);
	printf("%lu\n", len);
	return (0);
}
