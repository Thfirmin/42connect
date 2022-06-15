#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
 	char * empty = (char*)"";
	size_t	len = -1;
	printf ("Original result: %s\n",strnstr(haystack, needle, len));
	printf ("42v result: %s\n",ft_strnstr(haystack, needle, len));
}
