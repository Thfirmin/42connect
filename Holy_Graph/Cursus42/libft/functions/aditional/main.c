include "libft.h"

int	main(void)
{
	char			s[] = "ola, mundo";
	unsigned int 	start = 5;
	size_t			len = 1;
	char			*result;

	//result = ft_substr(s, start, len);
	printf("s: %s\nresult: %s", s, ft_substr(s, start, len));
	free(result);
	return 0;
}
