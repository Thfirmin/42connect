#include <stdlib.h>
#include <stdio.h>

size_t ft_unrandi(size_t rand_max)
{
	size_t	rand_num = ((size_t) &rand_max * 1352417);
	printf ("\n%zu\n", rand_num);
	rand_num += 1234567;
	printf ("\n%zu\n", rand_num);
	rand_num /= 115732;
	printf ("\n%zu\n", rand_num);
	return (rand_num % rand_max);
}
