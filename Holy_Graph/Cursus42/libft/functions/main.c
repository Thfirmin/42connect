#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

void	ft_printarray(char *str, int size);

/*int	main(void)
{
	char	dstdst[] = "Hell Mundano";
	char	dstor[sizeof(dstdst)];
	char	dst42[sizeof(dstdst)];
	char	srcor[] = " Mundo";
	char	src42[] = " Mundo";
	unsigned int dstsize = 0;
	size_t	lenor;
	size_t	len42;
	while (dstsize <= sizeof(dstor))
	{
		printf ("\ndstsize = %u\n", dstsize);
		
		strcpy (dstor, dstdst);
		lenor = strlcpy(dstor, srcor, dstsize);
		printf ("\nExpected:\n%zu\n\"%s\"\n\"%s\"\n", lenor, dstor, srcor);

		strcpy(dst42, dstdst);
		len42 = ft_strlcpy(dst42, src42, dstsize);
		printf ("\nReallity:\n%zu\n\"%s\"\n\"%s\"\n", len42, dst42, src42);

		printf ("==============================\n");
		dstsize ++;
	}
	return (0);
}*/

int	main(void)
{
	char	s1[] = "Ola m";
	char	s2[] = "ola m";
	size_t	n = 5;
	printf ("Result: %d\n", 
 37memcmp(s1, s2, n));
	return 0;
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
