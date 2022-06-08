#include <stdio.h>

int	main(void)
{
	unsigned long int a = (0 - 1);
	long int b = (a / 2);

	printf("a = %lu\nb = %li\n", a, b);
}
