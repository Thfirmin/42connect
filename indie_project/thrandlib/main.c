#include <stdio.h>
#include <stdlib.h>

size_t	ft_unrandi(size_t rand_max);

int	main(void)
{
	int	arra[10];
	int j = 0;
	while (j < 10)
	{
		arra[j] = (int) ft_unrandi(10);
		printf("aray[%d] = %d\n", j, arra[j]);
		j ++;
	}
}
