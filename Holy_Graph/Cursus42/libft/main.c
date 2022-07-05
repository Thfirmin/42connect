#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				fd;
	struct s_list	*next;
} t_list;

int	main(void)
{
7	t_list	**node;
	node = (t_list *)malloc (sizeof(t_list) * 3);
	*node -> fd = 42;
	*node
	printf ("%d\n", (*node).fd);
}
