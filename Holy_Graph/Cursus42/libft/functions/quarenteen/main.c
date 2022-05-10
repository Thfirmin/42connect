#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_bzero(void *s, unsigned int n);

void	ft_printchar(char *str, int	size);

int	main(void)
{
	const char	s[] = "Ola, mulndo";
	int			n = 10;

	ft_printchar(s, n);
	printf ("\n");
	ft_bzero(s, n);
	printf ("\n");
	/*printf ("valor de s = %s\n", s);
	printf ("valor de c = %d em char = %c\n", c, c);
	ptr = ft_strrchr(s, c);
	printf ("resultado de strnstr = %s\n", ptr);*/
}

void	ft_printchar(char *str, int	size)
{
	char	c;
	int		count;

	count = 0;
	while (count < size)
	{
		c = str[count];
		write (1, &c, 1);
		count ++;
	}
}
