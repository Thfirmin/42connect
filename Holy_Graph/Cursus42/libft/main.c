#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "abcd";
	size_t	len = 9;
	printf ("Original result: %s\n",strnstr(haystack, needle, len));
	printf ("42v result: %s\n",ft_strnstr(haystack, needle, len));
//	/* 2 */ check(ft_strnstr(haystack, needle, -1) == haystack + 1); showLeaks();
//	/* 10 */ check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();
//	/* 11 */ check(ft_strnstr(haystack, "cd", 8) == NULL); showLeaks()
//	/* 8 */ check(ft_strnstr(haystack, "aaabc", 5) == haystack); showLeaks();
//	/* 9 */ check(ft_strnstr(empty, "12345", 5) == 0); showLeaks();
//	/* 10 */ check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();
//	/* 11 */ check(ft_strnstr(haystack, "cd", 8) == NULL); showLeaks();
//	/* 12 mbueno-g */ check(ft_strnstr(haystack, "a", 1) == haystack); showLeaks();;
}
