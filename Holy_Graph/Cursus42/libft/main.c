#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	size_t	len = -1;
	printf ("Original result: %s\n",strnstr(haystack, needle, len));
	printf ("42v result: %s\n",ft_strnstr(haystack, needle, len));
//	/* 2 */ check(ft_strnstr(haystack, needle, -1) == haystack + 1); showLeaks();
//	/* 10 */ check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();
//	/* 11 */ check(ft_strnstr(haystack, "cd", 8) == NULL); showLeaks();
}
