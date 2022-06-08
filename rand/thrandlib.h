#ifndef THRANDLIB
# define THRANDLIB
# include <stdlib.h>
char	ft_prandc(void);
char	ft_randc(void);
ssize_t	ft_randi(ssize_t rand_min, ssize_t rand_max);
char	*ft_randstr(size_t size, int char_min, int char_max);
size_t	ft_unrandi(size_t rand_max);
#endif
