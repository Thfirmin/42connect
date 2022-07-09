#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				fd;
	struct s_list	*next;
} t_list;

int	main(void)
{
	t_list	**node;
	node = (t_list *)malloc (sizeof(t_list) * 3);
	**node -> fd = 42;
	*(*node + 1) -> fd = 24;
	*(*node + 2) -> fd = 54;
	printf ("%d\n", (*node).fd);
}
