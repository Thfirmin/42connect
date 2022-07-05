#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	j = 54;
	t_list	*pessoa;
	pessoa = ft_lstnew(&j);
	printf ("%d\n", pessoa -> content);
}
