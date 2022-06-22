#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	void	*p;
	
	p = malloc(n * size);
	if (!p)
		return (0);
	ft_bzero(p, size * n);
	return (p);
}
